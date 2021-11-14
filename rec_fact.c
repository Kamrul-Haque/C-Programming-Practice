#include<stdio.h>

long long unsigned fact(int x);

int main()
{
    int n;

    printf("Enter number:");
    scanf("%d",&n);
    if(n<0)printf("INVALID");
    else printf("Factorial of %d is %llu",n,fact(n));

    return 0;
}
long long unsigned fact(int x)
{
    long long unsigned p=1;

    if(x>1)
    {
        return p=x*fact(x-1);
    }
    else return 1;
}
