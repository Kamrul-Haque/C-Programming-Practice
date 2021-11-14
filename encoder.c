#include<stdio.h>
#include<string.h>

main()
{
    char s[20],p[20];
    int l,i,j,x=0,y=1;

    gets(s);
    l=strlen(s);

    printf("%d\n",l);

    if(l%2==0)
    {
        for(i=0;i<l/2;i++)
        {
            p[x]=s[i];
            x=x+2;
        }
        for(j=l-1;j>=l/2;j--)
        {
            p[y]=s[j];
            y=y+2;
        }
    }
    else
    {
        for(i=0;i<=(l+1)/2;i++)
        {
            p[x]=s[i];
            x=x+2;
        }
        for(j=l-1;j>(l-1)/2;j--)
        {
            p[y]=s[j];
            y=y+2;
        }
    }

    for(i=0;i<l;i++)printf("%c",p[i]);
}
