#include<stdio.h>


main()
{
    int marks;
    printf("Give ur mark..");
    scanf("%d",&marks);
    if (marks>=80)
        printf("A+");
    else if (marks>74)
            printf("A");
    else if (marks>69)
            printf("A-");
    else if (marks>64)
            printf("B+");
    else
        printf("Sorry");
}
