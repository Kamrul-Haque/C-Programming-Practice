#include<stdio.h>

main()
{
    int i,j,x,y=0;
    int a[20];

    for(i=0;i<20;i++)
    {
        printf("a%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        x=0;
        for(j=i+1;j<20;j++)
        {
            if(a[i]==a[j])x++;
            if(x>y)y=a[i];
        }
    }
    printf("\nMode:%d\n",y);

    return 0;
}
