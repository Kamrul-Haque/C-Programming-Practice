#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float x,a,v,d;
    printf("Enter the length of a side of the cube:");
    scanf("%f",&x);

    if(x<0)
    {
        printf("Length can't be negative");
        printf("\nEnter the length of a side of the cube:");
        scanf("%f",&x);

        v=x*x*x;
        a=6*x*x;
        d=sqrt(3)*x;

        printf("\nThe volume of the cube:%.3f",v);
        printf("\nThe area of the cube:%.3f",a);
        printf("\nThe length of the diagonal of the cube:%.3f",d);

    }
    else
    {
        v=x*x*x;
        a=6*x*x;
        d=sqrt(3)*x;

        printf("\nThe volume of the cube:%.3f",v);
        printf("\nThe area of the cube:%.3f",a);
        printf("\nThe length of the diagonal of the cube:%.3f",d);
    }


    getch();
    return 0;
}
