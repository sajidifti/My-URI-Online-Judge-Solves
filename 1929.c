#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,t;
    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d %d %d",&b ,&c, &d);

        e=b+c;
        f=c+d;

        if(a<b)
        {
            t=a;
            a=b;
            b=t;

        }

        if(a<c)
        {
            t=a;
            a=c;
            c=t;

        }

        if(a<d)
        {
            t=a;
            a=d;
            d=t;

        }

        if(b<c)
        {
            t=b;
            b=c;
            c=t;

        }

        if(b<d)
        {
            t=b;
            b=d;
            d=t;

        }

        if(c<d)
        {
            t=c;
            c=d;
            d=t;

        }
        if(a < f || b < f)
               {
                   printf("S\n");
               }
        else
               {
                   printf("N\n");
               }
    }
    return 0;
}

