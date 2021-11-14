#include<stdio.h>


main()
{
    printf("You have the following chart: \n 1. Rice \t 2. Fish \t 3. Meat");
    int a,b;
    printf("\n Give ur choice");
    scanf("%d",&a);
 switch(a){

  case 1:
     printf("Rice is coming in hot");
     printf("\nYou have also : \n 1. polao \t 2. khichuri\n");
    printf("\n Give ur choice");
    scanf("%d",&b);
    switch(b){
    case 1:
        printf("\npolao is coming");
        break;
    case 2:
        printf("\nvai khichuri shesh hoya gese");
        break;
    default:
    printf("\npanta vaat");

    }
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
}
