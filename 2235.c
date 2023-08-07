#include <stdio.h>

int main()
{
    int a, b, c,d,e,f,g,h,i;
    scanf("%d%d%d", &a, &b, &c);
    d=a-b;
    e=b-c;
    f=a+b-c;
    g=b+c-a;
    h=a+c-b;
    i=a-c;

    if(d == 0) printf("S\n");
    else if(i == 0)
    {
        printf("S\n");
    }
    else if(e == 0)
    {
        printf("S\n");
    }
    else if(f == 0)
    {
        printf("S\n");
    }
    else if(g == 0)
    {
        printf("S\n");
    }
    else if(h == 0)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
