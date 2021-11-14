#include<stdio.h>
#include<conio.h>

void cmp(char ar[],char c);

int main()
{
    char a[20],x;

    printf("Enter a string: ");
    gets(a);
    printf("Enter a character: ");
    x=getchar();
    cmp(a,x);

    return 0;
}
void cmp(char ar[],char c)
{
    int i,k=0;

    for(i=0;ar[i]!='\0';i++)
    {
        if(ar[i]==c)
        {
            printf("Found");
            k++;
            break;
        }
    }
    if(!k)printf("Not Found");

    return 0;
}
