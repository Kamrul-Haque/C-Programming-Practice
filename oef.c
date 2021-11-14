#include<stdio.h>

void odd_even(unsigned x);
void factorial(unsigned x);

int main()
{
    unsigned i;

    printf("Enter a positive number:");
    scanf("%u",&i);
    odd_even(i);
    factorial(i);

    return 0;
}
void factorial(unsigned x)
{
    int i;
    long long unsigned p=1;

    for(i=x;i>0;i--)
        p=p*i;
    printf("Factorial %d=%llu",x,p);
}
void odd_even(unsigned x)
{
    if(x%2==0)printf("EVEN\n");
    else printf("ODD\n");
}
