#include <stdio.h>
int main()
{
    double a,b,c,d,i=1,j=1;
    for(;;)
    {
        scanf("%lf",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            continue;
        }
        while(i==1)
        {
            scanf("%lf",&b);
            if(b<0 || b>10)
            {
                printf("nota invalida\n");
                continue;
            }
            i=i+2;
        }
        c=(a+b)/2.0;

        printf("media = %.2lf\n",c);
        printf("novo calculo (1-sim 2-nao)\n");

        while(j==1)
        {
            scanf("%lf", &d);
            if(d<1 || d>2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            j=j+2;
        }
        if(d==2)break;
    }
    return 0;
}
