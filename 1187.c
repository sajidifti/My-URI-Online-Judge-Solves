#include <stdio.h>
int main()
{
    double a=0.0, A[12][12];
    char T[2];
    int C,i,j,k,p=10,q=1;
    scanf("%s", &T);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
            scanf("%lf", &A[i][j]);
    }
    for(k=0; k<=4;k++)
    {
        for(C=q; C<=p;C++) a=a+A[k][C];
            p--;
            q++;
    }
    if(T[0]=='S')printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}

