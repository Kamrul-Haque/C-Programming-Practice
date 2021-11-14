#include<stdio.h>
#include<conio.h>

main()
{
    char x;
    float C,F,K;

    printf("Press\nx=1:Celsius to Fahrenheit\nx=2:Fahrenheit to Celsius\nx=3:Celsius to Kelvin\nx=4:Kelvin to Celsius\nx=5:Fahrenheit to Kelvin\nx=6:Kelvin to Fahrenheit\nx=0:Exit");

    while(x!='0')
    {
        printf("\nx:");
        x=getche();

        switch(x)
        {
            case '0':
            break;

            case '1':
            printf("\nEnter temperature in Celsius:");
            scanf("%f",&C);
            printf("The temperature is %.2f degree Fahrenheit.\n",(C*9)/5+32 );
            break;

            case '2':
            printf("\nEnter temperature in Fahrenheit:");
            scanf("%f",&F);
            printf("The temperature is %.2f degree Celsius.\n",(F-32)*5/9 );
            break;

            case '3':
            printf("\nEnter temperature in Celsius:");
            scanf("%f",&C);
            printf("The temperature is %.2f degree Kelvin.\n",C+273.15 );
            break;

            case '4':
            printf("\nEnter temperature in Kelvin:");
            scanf("%f",&K);
            printf("The temperature is %.2f degree Celsius.\n",K-273.15 );
            break;

            case '5':
            printf("\nEnter temperature in Fahrenheit:");
            scanf("%f",&F);
            printf("The temperature is %.2f degree Kelvin.\n",((F-32)*5/9)+273.15 );
            break;

            case '6':
            printf("\nEnter temperature in Kelvin:");
            scanf("%f",&K);
            printf("The temperature is %.2f degree Fahrenheit.\n",((K-273.15)*9/5)+32 );
            break;

            default:
            printf("\nINVALID INPUT");
            break;
        }
    }
    printf("\noperation terminated");

    getch();
    return 0;
}
