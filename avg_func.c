#include<stdio.h>

float avg(void);

int main()
{
    float x;
    x=avg();
    printf("%f",x);

    return 0;
}

float avg(void)
{
    float a,sum=0;
    int i;

    for(i=1;i<11;i++)
    {
        scanf("%f",&a);
        a=sum+a;
    }
    return a/i;
}
