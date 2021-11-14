#include<stdio.h>

main()
{
    int a[3][3][3],i,j,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
             printf("a%d%d%d:",i,j,k);
             scanf("%d",&a[i][j][k]);
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
             printf("%d\t",a[i][j][k]);
            }
        }
    }
    return 0;
}
