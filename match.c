#include<stdio.h>

main()
{
    int num[10];
    int a,b,i,z=0;

    for(a=0;a<10;a++)
    {
        printf("Enter number %d:",a+1);
        scanf("%d",&num[a]);
    }
    for(b=0;b<10;b++)
    {
        for(i=b+1;i<10;i++)
        {
            if(num[b]==num[i])
            {
             printf("\nMatch found:%d \n",num[i]);
             z=1;
            }
        }
    }
    if(z==0)printf("\nNO MATCH FOUND\n");

    return 0;
}
