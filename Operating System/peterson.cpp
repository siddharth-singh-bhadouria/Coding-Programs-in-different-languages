#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdbool.h>
#define _BSD_SOURCE
#include <sys/time.h>
#define BSIZE 8 
#define PWT 2   
#define CWT 10  
#define RT 10   
int shmid1, shmid2, shmid3, shmid4;
key_t k1 = 5491, k2 = 5812, k3 = 4327, k4 = 3213;
bool *SHM1;
int *SHM2;
int *SHM3;
int myrand(int n) 
{
    time_t t;
    srand((unsigned)time(&t));
    return (rand() % n + 1);
}
int main()
{
    shmid1 = shmget(k1, sizeof(bool) * 2, IPC_CREAT | 0660);    
    shmid2 = shmget(k2, sizeof(int) * 1, IPC_CREAT | 0660);     
    shmid3 = shmget(k3, sizeof(int) * BSIZE, IPC_CREAT | 0660); 
    shmid4 = shmget(k4, sizeof(int) * 1, IPC_CREAT | 0660);     
    if (shmid1 < 0 || shmid2 < 0 || shmid3 < 0 || shmid4 < 0)
    {
        perror("Main shmget error: ");
        exit(1);
    }
    SHM3 = (int *)shmat(shmid3, NULL, 0);
    int ix = 0;
    while (ix < BSIZE) 
        SHM3[ix++] = 0;
    struct timeval t;
    time_t t1, t2;
    gettimeofday(&t, NULL);
    t1 = t.tv_sec;
    int *state = (int *)shmat(shmid4, NULL, 0);
    *state = 1;
    int wait_time;
    int i = 0;       
    int j = 1;       
    if (fork() == 0) 
    {
        SHM1 = (bool *)shmat(shmid1, NULL, 0);
        SHM2 = (int *)shmat(shmid2, NULL, 0);
        SHM3 = (int *)shmat(shmid3, NULL, 0);
        if (SHM1 == (bool *)-1 || SHM2 == (int *)-1 || SHM3 == (int *)-1)
        {
            perror("Producer shmat error: ");
            exit(1);
        }
        bool *flag = SHM1;
        int *turn = SHM2;
        int *buf = SHM3;
        int index = 0;
        while (*state == 1)
        {
            flag[j] = true;
            printf("Producer is ready now.\n\n");
            *turn = i;
            while (flag[i] == true && *turn == i)
                ;
            index = 0;
            while (index < BSIZE)
            {
                if (buf[index] == 0)
                {
                    int tempo = myrand(BSIZE * 3);
                    printf("Job %d has been produced\n", tempo);
                    buf[index] = tempo;
                    break;
                }
                index++;
            }
            if (index == BSIZE)
                printf("Buffer is full, nothing can be produced!!!\n");
            printf("Buffer: ");
            index = 0;
            while (index < BSIZE)
                printf("%d ", buf[index++]);
            printf("\n");

            flag[j] = false;
            if (*state == 0)
                break;
            wait_time = myrand(PWT);
            printf("Producer will wait for %d seconds\n\n", wait_time);
            sleep(wait_time);
        }
        exit(0);
    }
    if (fork() == 0) 
    {
        SHM1 = (bool *)shmat(shmid1, NULL, 0);
        SHM2 = (int *)shmat(shmid2, NULL, 0);
        SHM3 = (int *)shmat(shmid3, NULL, 0);
        if (SHM1 == (bool *)-1 || SHM2 == (int *)-1 || SHM3 == (int *)-1)
        {
            perror("Consumer shmat error:");
            exit(1);
        }
        bool *flag = SHM1;
        int *turn = SHM2;
        int *buf = SHM3;
        int index = 0;
        flag[i] = false;
        sleep(5);
        while (*state == 1)
        {
            flag[i] = true;
            printf("Consumer is ready now.\n\n");
            *turn = j;
            while (flag[j] == true && *turn == j);
            if (buf[0] != 0)
            {
                printf("Job %d has been consumed\n", buf[0]);
                buf[0] = 0;
                index = 1;
                while (index < BSIZE) 
                {
                    buf[index - 1] = buf[index];
                    index++;
                }
                buf[index - 1] = 0;
            }
            else
                printf("Buffer is empty, nothing can be consumed!!!\n");
            printf("Buffer: ");
            index = 0;
            while (index < BSIZE)
                printf("%d ", buf[index++]);
            printf("\n");
            flag[i] = false;
            if (*state == 0)
                break;
            wait_time = myrand(CWT);
            printf("Consumer will sleep for %d seconds\n\n", wait_time);
            sleep(wait_time);
        }
        exit(0);
    }

    while (1)
    {
        gettimeofday(&t, NULL);
        t2 = t.tv_sec;
        if (t2 - t1 > RT) 
        {
            *state = 0;
            break;
        }
    }

    printf("The clock ran out.\n");
    return 0;
}