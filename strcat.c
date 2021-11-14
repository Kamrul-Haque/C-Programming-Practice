#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[100]="";

    for( ; ; )
    {
        gets(s1);
        strcat(s1,"\n");
        if(strcmp(s1,"quit\n")==0)break;
        else if(strlen(s1)+strlen(s2)<100) strcat(s2,s1);
        else break;
    }
    printf(s2);

    return 0;
}
