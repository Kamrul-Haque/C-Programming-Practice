#include<stdio.h>
#include<conio.h>

main()
{
    int x;
    printf("Enter Year:");
    scanf("%d",&x);

    if(x%400==0)
    {
       printf("%d is a leap Year",x);
    }
    else if(x%100!=0 && x%4==0)
    {
       printf("%d is a leap Year",x);
    }
    else
    {
       printf("%d is not a leap Year",x);
    }

    getch();
    return 0;

}
