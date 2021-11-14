#include<stdio.h>

main()
{
    int a,c=0;
    //printf("Give ur age");
    while(c<3){
            printf("\n");
    scanf("%d",&a);
    if(a%2==1){
    while(a<=100){
        printf("\t %d ",a);
        a+=2;
    } }
    else{
        while(a<=100){
        printf("\t %d ",a);
        a+=2;
    } }
    c++;
    //printf("\n%d",c);
    }
}

