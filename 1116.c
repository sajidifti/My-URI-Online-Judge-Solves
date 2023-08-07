
#include<stdio.h>
int main()
{
    int m,n,o,p;
    double x;
    scanf("%d",&m);
    for(n=1;n<=m;n++)
    {
        scanf("%d%d",&o,&p);
        if(p==0)
            printf("divisao impossivel\n");
        else
        {
            x=o/(p*1.00);
            printf("%.1lf\n",x);
        }
    }
    return 0;
}
