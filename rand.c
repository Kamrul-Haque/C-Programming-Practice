#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;

    for(i=0;i<10;i++)
        printf("%5d\t %5d\t %5d\n",rand(),rand(),rand());

    return 0;
}
