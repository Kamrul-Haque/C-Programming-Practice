#include<stdio.h>


main()
{
    int age;
    printf("Give ur age");
    scanf("%d",&age);
    if (age<18)
        printf("Goto abcd.com and have a lollypop \n");
    else if (age==18)
            printf("Versityadmission.com \n");
    else if (age<22)
            printf("bdjobs.com \n");
    else if (age<27)
            printf("shaadi.com \n");
    else if (age<65)
            printf("oldhome.com \n");
    else
        printf("goodbye.com\n");
}
