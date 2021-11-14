#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char c,a[]="-------",b[]="hungman";
    int i,j=0,k=0;

    printf("GUESS THE WORD\nTYPE AN ALPHABET\nIf matches the alphabet will be shown with position\n");
    printf(a);
    printf("\n");

    for(i=0; ;i++)
    {
        c=getche();
        printf("\n");

        for(i=0;b[i];i++)
        {
            if(c==b[i])
            {
                a[i]=b[i];
                k++;
            }
        }
        printf(a);
        if(k==strlen(b))break;


        printf("\n");

        j++;
    }
    printf("\n%d Tries",j);

    getch();
    return 0;
}
