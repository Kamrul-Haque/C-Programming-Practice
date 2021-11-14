#include<stdio.h>
#include<string.h>

int main()
{
    char s[80];
    int i;

    printf("Enter a string:");
    gets(s);
    for(i=strlen(s)-1;i>=0;i--)printf("%c",s[i]);

    return 0;

}
