#include<stdio.h>


main()
{
    int age;
    printf("Give ur age");
    scanf("%d",&age);
 switch(age){

  case 1:
     printf("Lactogen");
     break;
  case 3:
  case 4:
  case 5:
     printf("Rice");
     break;
  case 10:
     printf("Polao");
     break;
  default:
     printf("Anything");
 }
}
