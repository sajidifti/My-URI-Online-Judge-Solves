#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,i,j,k,p=11;
    scanf("%s", &T);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
        scanf("%lf", &M[i][j]);
    }
    for(k=1; k<=11;k++)
    {
        for(C=11; C>=p;C--)
            a+=M[k][C];
        p--;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/66.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
