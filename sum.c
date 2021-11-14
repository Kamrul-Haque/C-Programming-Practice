#include<stdio.h>

int main()
{
    int i,j,x=0,s=0,a[4][4]={
                    5,6,7,8,
                    9,9,7,11,
                    7,8,8,33,
                    0,0,0,22
                    };
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            s=s+a[i][j];
    }
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(a[i][j]>x)
                x=a[i][j];
    printf("SUM:%d\n",s);
    printf("Largest value:%d",x);

    return 0;
}
