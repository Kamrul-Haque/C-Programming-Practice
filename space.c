#include<stdio.h>

int main()
{
    char a[80],*p;

    p=a;
    gets(a);
    while(*p && *p!=' ')
        p++;
    printf(p);

    return 0;
}
