#include<stdio.h>
#include<conio.h>

main()
{
    int x,i,z=0;

    printf("Enter an integer:");
    scanf("%d",&x);

    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
         printf("\n%d is a factor of %d",i,x);
         z=1;
        }
    }
    if(z==0)printf("\n%d is a prime number\n",x);

    getch();
    return 0;
}

