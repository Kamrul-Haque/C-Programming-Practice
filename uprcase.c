#include<stdio.h>
#include<conio.h>

main()
{
    char x;

    for( ; ; )
    {
        x=getche();
        if(x=='\r')break;
        else printf("\n%c\n",x-32);
    }

    getch();
    return 0;
}
