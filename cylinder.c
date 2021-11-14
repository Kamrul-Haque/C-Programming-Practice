#include<stdio.h>
#include<conio.h>
#define pi 3.1416

main()
{
    float r,h,a,v;
    printf("Enter the radius of the cylinder:");
    scanf("%f",&r);

    printf("\nEnter the hight of the cylinder:");
    scanf("%f",&h);

    v=pi*r*r*h;
    a=2*pi*r*(r+h);

    printf("\nThe area of the cylinder is %.3f",a);
    printf("\nThe volume of the cylinder is %.3f",v);

    getch();
    return 0;
}
