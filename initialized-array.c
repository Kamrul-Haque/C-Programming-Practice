#include<stdio.h>

int main()
{
    int x,i;
    int a[][3]={
        1,1,1,
        2,4,8,
        3,9,27,
        4,16,64,
        5,25,125,
        6,36,216,
        7,49,343,
        8,64,512,
        9,81,729,
        10,100,1000};

        printf("Enter cube of a number:");
        scanf("%d",&x);

        for(i=0;i<10;i++)
        {
            if(x==a[i][2])break;
        }
        printf("The number:%d\tSquare:%d",a[i][0],a[i][1]);

        return 0;
}
