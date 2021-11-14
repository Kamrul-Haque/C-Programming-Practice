#include<stdio.h>

main()
{
    int a,b;
    long long unsigned f=1;
    scanf("%d",&a);
    b=a;

    while(a>0){
    f=f*a;
    a--;
    }
    printf("\nThe factorial of %d is %lld\n",b,f);
    return 0;
}

