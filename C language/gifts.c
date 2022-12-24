#include <stdio.h>
int  main()
{
    int a;
   printf("Enter number of exams you passed in");
   scanf("%d",&a);

   if (a==1)
   {
       printf("You get a 15 rupee gift\n");
   }

   else if (a==2)
   {
       printf("You get a 45 rupee gift\n");
   }

   else
   {
       printf("Wrong input\n");
   }

    return 0;

}