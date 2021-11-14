#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;

    printf("x:");
    scanf("%d",&x);

    printf("y:");
    scanf("%d",&y);

    printf("\nSummation:%d",x+y);
    printf("\nDifference:%d",x-y);
    printf("\nMultiplication:%d",x*y);
    printf("\nQuotient of x/y:%d",x/y);
    printf("\nRemainder of x/y:%d",x%y);

    getch();
    return 0;
}
