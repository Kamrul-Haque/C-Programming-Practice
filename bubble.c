#include<stdio.h>
#include<conio.h>

main()
{
    int item[100];
    int a,b,t,count;

    printf("How many numbers?");
    scanf("%d",&count);

    for(a=0;a<count;a++)
    {
       scanf("%d",&item[a]);
    }
    for(a=0;a<count;++a)
    {
        for(b=count-1;b>=a;--b)
        {
            if(item[b-1]>item[b])
            {
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    }
    for(a=0;a<count;a++)printf("%d",item[a]);

    getch();
    return 0;
}
