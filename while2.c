#include<stdio.h>

main()
{
    float a,b;
    int c=0;

    while(c<5){
    printf("\na:");
    scanf("%f",&a);
    printf("\nb:");
    scanf("%f",&b);
    printf("\nThe average is %f\n",(a+b)/2);
    c++;
    }
    return 0;
}

