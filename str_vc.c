#include<stdio.h>

int main()
{
    char a[20];
    int i,j=0,k=0;

    printf("Enter a string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='A'&&a[i]<='Z') || (a[i]>='a'&&a[i]<='z'))
        {
            switch(a[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    j++;
                    break;
                default:
                    k++;
            }
        }
    }
    printf("Vowel:%d Consonant:%d",j,k);

    return 0;
}
