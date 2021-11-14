#include<stdio.h>

char mystrcat(char *to,char *from);

int main()
{
    char t[80],*f[20];

    gets(t);
    gets(f);
    mystrcat(t,f);
    printf(t);

    return 0;
}

char mystrcat(char *to,char *from)
{
    while(*to)
        to++;
    while(*from)
        *to++=*from++;
    *to='\0';
}
