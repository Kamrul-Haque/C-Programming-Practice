#include<stdio.h>

int len(char ar[]);

int main()
{
    int x;
    char a[80];

    printf("Enter a string: ");
    gets(a);
    x=len(a);
    printf("Length of the string: %d",x);

    return 0;
}
int len(char ar[])
{
    int i=0,k=0;

    while(ar[i])
    {
        k++;
        i++;
    }
    return k;
}
