#include<stdio.h>

main()
{
    float a[100],k;
    int i,j,l;

    printf("How many numbers?\n");
    scanf("%d",&l);

    for(i=0;i<l;i++)
    {
        printf("Enter fraction %d:",i+1);
        scanf("%f",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        for(j=l-1;j>=0;j--)
        {
            if(a[j-1]>a[j])
            {
                k=a[j-1];
                a[j-1]=a[j];
                a[j]=k;
            }
        }
    }
    for(i=0;i<l;i++)printf("\n%.2f",a[i]);

    return 0;

}
