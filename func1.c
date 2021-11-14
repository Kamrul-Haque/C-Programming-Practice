#include<stdio.h>

void F(void);

main()
{
    printf("I ");
    F();
    printf("C");

    return 0;
}

void F(void)
{
    printf("don't like ");
    return;
    printf("like ");
}
