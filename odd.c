#include<stdio.h>

main()
{
    int i;

    for(i=1;i<101;i++)
    {
        if(i%2==0)continue;
        printf("%d\t",i);
    }

    return 0;
}
