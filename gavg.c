#include<stdio.h>

int main()
{
    float m[4][3],x,y=0,avg=0;
    int i,j,z;

    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        {
            printf("student%d subject%d:",i+1,j+1);
            scanf("%f",&m[i][j]);
        }
    for(i=0;i<3;i++)
    {
        avg=0;
        for(j=0;j<2;j++)
        {
            avg=avg+m[i][j];
        }
        x=avg/2;
        printf("\naverage of student%d:%.2f",i,x);
        if(x>y)
        {
            y=x;
            z=i;
        }
    }
    printf("\nBEST AVERAGE:%.2f of student%d",y,i);

    return 0;
}
