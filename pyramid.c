#include<stdio.h>

void main()
{
    int i,n;
    char c;
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        for(c='A';c<='A'+i;c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }


}
