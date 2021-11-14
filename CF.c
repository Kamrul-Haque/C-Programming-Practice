#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
   float C,F;
   char x;

   printf("Enter\nX=1:Celsius to Fahrenheit\nX=2:Fahrenheit to Celsius\nX=0:exit\n");

   for( ; ; )
   {
    printf("X:");
    x=getche();

           if(x=='1')
           {
            printf("\nEnter temperature in Celsius:");
            scanf("%f",&C);
            printf("The temperature is %f degree Fahrenheit.\n",(C*9)/5+32 );

           }

           else if(x=='2')
           {
            printf("\nEnter temperature in Fahrenheit:");
            scanf("%f",&F);
            printf("The temperature is %f degree Celsius.\n",(F-32)*5/9 );

           }
           else if(x=='0')
           {
            break;
           }
           else
           {
             printf("\nINVALID INPUT\n");
           }
    }
    printf("\nThank You");

    getch();
    return 0;


}
