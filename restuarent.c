#include<stdio.h>

struct rest
{
    char n[20];
    char l[80];
    int sn;
}a[10];

int main()
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter name of restaurant%d:",i+1);
        scanf("%s",a[i].n);
        printf("Enter location of restaurant%d:",i+1);
        scanf("%s",a[i].l);
        printf("Enter shop number of restaurant%d:",i+1);
        scanf("%d",&a[i].sn);
    }
    for(i=0;i<3;i++)
    {
        printf("name of restaurant%d : %s\t",i+1,a[i].n);
        printf("location of restaurant%d : %s\t",i+1,a[i].l);
        printf("shop number of restaurant%d : %d\n",i+1,a[i].sn);
    }

    return 0;

}
