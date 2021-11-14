#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;


    for(i=2;i<=1000;i++)
    {
        k=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k=1;
            }
        }
        if(k==0)printf("%d\t",i);

    }

    getch();
    return 0;
}
