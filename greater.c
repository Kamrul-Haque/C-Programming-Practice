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

    if(x>y && x>z)
    {
        printf("x is greater than y & z");
    }
    else if(y>z && y>x)
    {
        printf("y is greater than x & z");
    }
    else
    {
        printf("z is greater than x & y");
    }

    getch();
    return 0;
}
