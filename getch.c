#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char ch,t;

    do
    {
        ch=getch();
        t=ch;
        //cprintf("%c",toupper(ch));//
    }while(ch!='q');

    printf("%c",t);

    return 0;
}
