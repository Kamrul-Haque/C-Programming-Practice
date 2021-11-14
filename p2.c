#include<stdio.h>

int main()
{
    char a='X',b='M',c='L',d;

    d=a;
    a=c;
    c=d;

    printf("%c%c%c",a,b,c);
return 0;
}
