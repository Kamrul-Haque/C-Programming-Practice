#include<stdio.h>

struct sct
    {
        int i;
        char c;
        double d;
        char str[5];
    }s;

int main()
{
    scanf("%d",&s.i);
    scanf("\n%c\n",&s.c);
    scanf("%lf",&s.d);
    scanf("%s",s.str);

    printf("%d %c %lf %s",s.i,s.c,s.d,s.str);

    return 0;
}
