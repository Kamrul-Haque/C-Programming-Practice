#include<stdio.h>

int main()
{
    int i,j;
    float a[40],x=1000;

    for(i=0;i<5;i++)
    {
        printf("Height of student%d:",i+1);
        scanf("%f",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<x)
        {
            x=a[i];
            j=i;
        }
    }
    printf("Lowest Height:%.2f of student%d",x,j);

    return 0;
}
