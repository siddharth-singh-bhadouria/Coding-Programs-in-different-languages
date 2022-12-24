#include <stdio.h>
int main()
{
    int input;
    float a;
    printf("Enter \t1 for kmsToMiles\n\t2 for inchesToFoot\n\t3 for cmsToinches\n\t4 for poundsToKgs\n\t5 for ichesToMeters\n\t0 to stop");
    
    float kmsToMiles=0.621371;
    float inchesToFoot=0.08333330755166665;
    float cmsToinches=0.393701;
    float poundsToKgs=0.453592;
    float ichesToMeters=0.0254;

    while(1)
    {
        printf("\nChoose the convertor you would like to use\n");
        scanf("%d",&input);
    switch(input)
    {
        case 1: printf("Enter value\n");
        scanf("%f",&a);
        printf("%f in km is %f in miles",a,kmsToMiles*a);
        break;

        case 2:printf("Enter value\n");
        scanf("%f",&a);
        printf("%f in inches is %f in foot",a,inchesToFoot*a);
        break;

        case 3:printf("Enter value\n");
        scanf("%f",&a);
        printf("%f in cms is %f in inches",a,cmsToinches*a);
        break;

        case 4:printf("Enter value\n");
        scanf("%f",&a);
        printf("%f in pounds is %f in kgs",a,poundsToKgs*a);
        break;

        case 5:printf("Enter value\n");
        scanf("%f",&a);
        printf("%f in inches is %f in meters",a,ichesToMeters*a);
        break;

        case 0:goto end;

        default: printf("Choice not available");

    }//switch
    }//while 

    end:printf("The program has ended\nThank you for using it");
    return 0;
}//main