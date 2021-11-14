#include<stdio.h>
#include<conio.h>
#define pi 3.1416

main()
{
    float r,a,p;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);

    if(r<0)
    {
       printf("Radius can't be negative");

       printf("\nEnter the radius of the circle:");
       scanf("%f",&r);

       a=pi*r*r;
       p=2*pi*r;

       printf("\nArea of the circle:%.3f",a);
       printf("\nPerimeter of the circle:%.3f",p);
    }
    else
    {
    a=pi*r*r;
    p=2*pi*r;

    printf("\nArea of the circle:%.3f",a);
    printf("\nPerimeter of the circle:%.3f",p);
    }



    getch();
    return 0;
}
