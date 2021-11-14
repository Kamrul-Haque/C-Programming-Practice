#include<stdio.h>

struct pen
{
    int id;
    char n[20];
    float p;
}a[6];

int main()
{
    int i,j;
    float m=0.0;

    for(i=0;i<6;i++)
    {
        printf("Enter ID NAME PRICE of pen%d:",i+1);
        scanf("%d %s %f",&a[i].id,a[i].n,&a[i].p);
    }
    for(i=0;i<6;i++)
    {
        printf("Pen%d ID:%d Name:%s Price:%.2f\n",i+1,a[i].id,a[i].n,a[i].p);
    }
    for(i=0;i<6;i++)
    {
        if(a[i].p>m)
        {
            m=a[i].p;
            j=i;
        }
    }
    printf("Maximum Price:%.2f of pen %s ID:%d",m,a[i].n,a[i].id);

    return 0;
}
