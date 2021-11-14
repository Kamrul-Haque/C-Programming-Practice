#include<stdio.h>

int main()
{
    int i;
    struct book
    {
        char n;
        float p;
        int pg;
    }a[7];

    for(i=0;i<6;i++)
    {
        printf("input Name:");
        a[i].n=getche();
        printf("\ninput Price:");
        scanf("%f",&a[i].p);
        printf("input Page no.:");
        scanf("%d",&a[i].pg);
    }
    for(i=0;i<6;i++)
        printf("\n%c %f %d",a[i].n,a[i].p,a[i].pg);

    return 0;
}
