#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    // g = acceleration due to gravity
    // R = radius of the planet
    // v = velocity of the spacecraft
    // V = escape velocity
    float g,R,v,V;

    printf("Enter acceleration due to gravity, g: ");
    scanf("%f",&g);

    printf("\nEnter Radius of the planet, R: ");
    scanf("%f",&R);

    printf("\nEnter speed of the spacecraft, v: ");
    scanf("%f",&v);

    V=sqrt(2*g*R);

    if(v<V)
    {
        float x;
        x=(V-v)*100/v;
        printf("\nNO.The spacecraft can't exit atmosphere.\nincrease the speed by %.3f percent which is %.3f.\n",x,V);
    }
    else
    {
        printf("\nYES.The spacecraft can exit atmosphere.\n");
    }

    getch();
    return 0;
}

