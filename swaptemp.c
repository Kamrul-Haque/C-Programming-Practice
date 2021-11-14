#include<stdio.h>

int main()
{
    int a,b,t;

    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a:%d\tb:%d",a,b);

    return 0;
}
