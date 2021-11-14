#include<stdio.h>

int XOR(int a,int b);

main()
{
    int p,q;

    printf("p:");
    scanf("%d",&p);

    printf("q:");
    scanf("%d",&q);

    printf("p AND q:%d\n",p&&q);
    printf("p OR q:%d\n",p||q);
    printf("p XOR q:%d",XOR(p,q));

    return 0;
}

int XOR(int a,int b)
{
    (a||b)&&!(a&&b);
}
