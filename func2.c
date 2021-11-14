#include<stdio.h>

float F(void);
float d,p;

main()
{
    printf("Enter amount in dollar:");
    scanf("%f",&d)
    F();

    return 0;
}

float F(void)
{
    p=1.34*d;
    printf("Amount in pound:%f",p);
}
