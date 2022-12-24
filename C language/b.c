#include <stdio.h>
#include <string.h>
int main()
{
    char s[]="hello";char st[]="world"; char str[50];
    strcpy(str,strcat(s,st));
    printf("%s",str);
    //scanf("",&);
    //printf("");
    return 0;
}