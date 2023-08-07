#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d", &a, &b);
    if(a<0)
    {
        c=b;

        if(b<0)
        {
            c=b*(-1);
        }
        for(d=0; d<c; d++)
        {
            e=a-d;
            if(e%b==0) break;
        }
        g=e/b;
    }
    else
    {
        g=a/b;
        d=a%b;
    }

    printf("%d %d\n",g,d);


    return 0;
}
