#include <stdio.h>
int main()
{
    int c,q;
    double t;
    scanf("%d%d",&c,&q);


    if(c==1)
    {
        t=c*4.00;
        printf("Total: R$ %.2lf\n",t);
    }

    else if(c==2)
    {
        t=q*4.50;
        printf("Total: R$ %.2lf\n",t);
    }

    else if(c==3)
    {
        t=q*5.00;
        printf("Total: R$ %.2lf\n",t);
    }

    else if(c==4)
    {
        t=q*2.00;
        printf("Total: R$ %.2lf\n",t);
    }

    else if(c==5)
    {
        t=q*1.50;
        printf("Total: R$ %.2lf\n",t);
    }

    return 0;

}
