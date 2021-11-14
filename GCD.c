#include<stdio.h>

int gcd(int x,int y);

int main()
{
    int a,b;

    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The GCD of %d and %d is %d",a,b,gcd(a,b));

    return 0;
}
int gcd(int x,int y)
{
    while(x!=y)
    {
        if(x>y)return gcd(x-y,y);
        else return gcd(x,y-x);
    }
    return x;
}
