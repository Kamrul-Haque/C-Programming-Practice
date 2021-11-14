#include<stdio.h>

main()
{
    char i;
    for(i='A';i<='Z';i++)
    {
        printf("ASCII code for %c is %d\t",i,i);
    }
    printf("\n\n");
    for(i='a';i<='z';i++)
    {
       printf("ASCII code for %c is %d\t",i,i);
    }

    return 0;
}
