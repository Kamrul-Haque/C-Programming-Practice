#include<stdio.h>



main()
{
    char x='y';
    int a,b;

    while(x=='Y' || x=='y'){
    printf("You have the following chart: \n 1. Rice \t 2. Fish \t 3. Meat");

    printf("\n Give ur choice");
    scanf("%d",&a);
 switch(a){

  case 1:
     printf("Rice is coming in hot");
     break;
  case 2:
    printf("Fish is coming fried");
     break;
  case 3:
    printf("Kalavuna is on the way ");
     break;
  default:
     printf("Salt only");
 }
 printf("\n Khaibi ar?? press 'Y' or 'y' for yes and 'N' or 'n' for no");
 scanf("%c",&x);
    }

}
