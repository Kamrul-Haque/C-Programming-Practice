#include<stdio.h>

int main()
{
    int sum,rm,re=0;
    scanf("%d",&sum);//567//

    while(sum>0)
        {
            rm=sum%10;//rm=567%10=7//
            re=re*10+rm;//re=0*10+7//
            sum=sum/10;//sum=567/10=56//
        }
        printf(" %d",re);

}
