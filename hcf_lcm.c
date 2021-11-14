#include<stdio.h>

void main()
{
    int x,y,i,k;

    printf("x:");
    scanf("%d",&x);

    printf("y:");
    scanf("%d",&y);

    if(x>y)k=x;
    else k=y;

    for(i=k;i/2>0;i--)
    {
        if(x%i==0 && y%i==0)break;
    }
    printf("GCF:%d",i);



    printf("\nLCM:%d",(x*y)/i);
}
