#include<stdio.h>
#include<string.h>

main()
{
    char i;
    char a[10][6]={
        "Zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        ""};
    printf("Integer(0-9):");
    i=getchar();

    printf("%s",a[i-'0']);

    return 0;
}
