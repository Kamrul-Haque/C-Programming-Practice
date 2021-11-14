#include<stdio.h>

int main()
{
    int i,j=0,k=1,s,n;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
    	printf("%d ",k);
        s=j+k;
        j=k;
        k=s;
    }


    return 0;
}
