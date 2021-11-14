#include<stdio.h>

int main()
{
    int i,n;
    char c,h;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(c='A';c<='A'+i;c++)
        {
            printf("%c",c);
        }
        for(h='A';h<'A'+i;h++)
                printf("%c",h);

        printf("\n");
    }

    return 0;
}
