#include<stdio.h>
#include<conio.h>

main()
{
    float x,y,z;
    printf("x:");
    scanf("%f",&x);

    printf("y:");
    scanf("%f",&y);

    printf("z:");
    scanf("%f",&z);

    if(x<y && x<z)
    {
        printf("x is smaller than y & z");
    }
    else if(y<z && y<x)
    {
        printf("y is smaller than x & z");
    }
    else
    {
        printf("z is smaller than x & y");
    }

    getch();
    return 0;
}
