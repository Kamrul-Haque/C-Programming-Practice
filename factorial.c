#include<stdio.h>
#include<conio.h>

main()
{
    int x,i;
    unsigned long long p=1;

    printf("Enter a positive integer:");
    scanf("%d",&x);

    if(x<0)
    {
        printf("factorial of negative numbers does not exist");
    }
    else if(x==0)
    {
        printf("0!=1");
    }
    else
    {
        for(i=x;i>0;i--)
        {
            p=p*i;
        }
        printf("\n%d!=%llu\n",x,p);
    }

    getch();
    return 0;
}
