#include<stdio.h>
#include<conio.h>

main()
{
    int i=0,j=0,k=0;
    char x;

    for( ; ; )
    {
        x=getche();

        if(x=='\r')break;
        else if((x>='A' && x<='Z')||(x>='a' && x<='z'))i++;
        else if(x>='0' && x<'9')j++;
        else k++;
    }
    printf("\nLetter:%d Digit:%d Symbol:%d",i,j,k);

    return 0;
}
