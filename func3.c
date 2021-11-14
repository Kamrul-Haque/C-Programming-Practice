#include<stdio.h>

int outnum(int I);

main()
{
    int a;
    printf("Insert an Integer:");
    scanf("%d",&a);
    outnum(a);

    return 0;
}

int outnum(int I)
{
    printf("%d",I);
}
