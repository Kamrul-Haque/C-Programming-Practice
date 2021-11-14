#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,ry,m,rm,w,d;

    printf("Enter number of days:");
    scanf("%d",&x);

    y=x/365;/*410/365=1*/
    ry=x%365;/*410%365=45*/
    m=ry/30;/*45/30=1*/
    rm=ry%30;/*45%30=15*/
    w=rm/7;/*15/7=2*/
    d=rm%7;/*15%7=1*/

    printf("This is %d years %d months %d weeks %d days",y,m,w,d);

    getch();
    return 0;
}
