#include<stdio.h>

main()
{
    int i,x;
    float d,s;

    printf("Number of times to repeat:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        printf("\nDistance:");
        scanf("%f",&d);

        printf("Average speed:");
        scanf("%f",&s);

        printf("Drive time:%.2f\n",d/s);
    }

    return 0;
}
