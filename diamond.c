#include<stdio.h>

int main()
{
    int i,j,k,n;

    printf("n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
            printf(" ");

        for(k=1;k<=i;k++)
            printf("* ");

        printf("\n");
    }

    for(i=n-1;i>0;i--)
    {
        for(j=0;j<n-i;j++)
            printf(" ");

        for(k=1;k<=i;k++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
