#include<stdio.h>

main()
{
    float f;

    for(f=1;(int)f<11;f++)
    {
        printf("%.1f\n",f/10);
    }

    return 0;
}
