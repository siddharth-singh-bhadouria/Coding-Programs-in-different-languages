#include <stdio.h>
#include <string.h>
struct Student
{
    int id,marks;
    char fav_char;
    char name[50];
};

int main()
{
    struct Student harry,sid,karan;
    harry.id=1;
    sid.id=2;
    karan.id=3;

    sid.name="sid";
    printf("Id of sid is %d \n",sid.id);
    printf("Name of id %d is %s",sid.id,sid.name);

    //scanf("",&);
    //printf("");
    return 0;
}