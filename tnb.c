#include<stdio.h>
#include<conio.h>

int main()
{
    char x;
    printf("Enter Characters\nPress \'q\' to quit\n");
    do
    {
        x=getch();

        switch(x)
        {
            case 'q':
            break;
            case '\t':printf("TAB\n");
            break;
            case '\b':printf("BACKSPACE\n");
            break;
            case '\r':printf("NEW LINE\n");
            break;
        }
    }while(x!='q');

    return 0;
}
