#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a:%d\tb:%d",a,b);

    return 0;
}
