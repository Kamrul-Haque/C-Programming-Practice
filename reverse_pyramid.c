#include<stdio.h>

int main()
{
    int i,j,k,n;

    printf("n:");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {

        for(k=1;k<=i;k++)
            printf("%d",k);

        printf("\n");
    }

    return 0;
}
