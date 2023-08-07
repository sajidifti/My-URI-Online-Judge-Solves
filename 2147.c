#include <stdio.h>
#include<string.h>
int main()
{
    int a, b,c;
    char s[10100];
    scanf("%d", &a);
    while(a--)
    {
        scanf("%s", s);
        b = strlen(s);
        c=b*.01;
        printf("%.2lf\n", c);
    }
    return 0;
}
