#include <stdio.h>
int main()
{
    int *a,b=3,**p,***q;
    a=&b;
    p=&a;
    q=&p;
    printf("%p\n",a);
    printf("%d\n",b);
    printf("%p\n",p);
    printf("%p\n",&a);
    printf("%p\n",q);
    printf("%p\n",&p);

    return 0;
}