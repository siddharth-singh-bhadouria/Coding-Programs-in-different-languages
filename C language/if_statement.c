#include <stdio.h>
int main()
{
    int dis=0,qnt=0;
    float rate,price;
    printf("Enter price and quantity of items");
    scanf("%f %d",&price,&qnt);
    if (qnt>1000)
    dis=10;
    rate=qnt*price-qnt*price*dis/100;
    printf("Total expenses=%f",rate);
    return 0;
}