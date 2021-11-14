#include<stdio.h>
#include<string.h>

main()
{
    char a[100];

    for( ; ; )
    {
        gets(a);
        if(strcmp((a),"quit")==0)break;
    }

    return 0;
}
