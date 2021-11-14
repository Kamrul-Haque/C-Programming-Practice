#include<stdio.h>
#include<conio.h>

main()
{
    char k,i='z';
    int j;

    for(j=1;j<11;j++)
    {
        k=getche();
        if(k<i)i=k;
    }
    printf("\nsmallest letter:%c",i);

    getch();
    return 0;

}
