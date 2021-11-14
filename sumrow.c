#include<stdio.h>

int main()
{
    int i,j,s,a[4][4]={
              5,6,7,8,
              9,9,7,11,
              7,8,8,33,
              0,0,0,22
              };
    for(i=0;i<4;i++)
    {
        s=0;
        for(j=0;j<4;j++)
            s=s+a[i][j];
        printf("%d\n",s);
    }

    return 0;
}
