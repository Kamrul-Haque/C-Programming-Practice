#include<stdio.h>
#include<string.h>

int main(void)
{
    char *p[3]={ "yes", "no", "maybe" };
    char s[80];

    gets(s);
    printf(p[strlen(s)%3]);

    return 0;
}
