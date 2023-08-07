#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,i,j,k,p=0,r=4;
    scanf("%s", &T);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
            scanf("%lf", &M[i][j]);
    }
    for(k=1; k<=10;k++)
    {
        if(k<=5)
        {
            for(C=0; C<=p;C++)
                a+=M[k][C];
            p++;
        }
        else if(k>=6)
        {
        for(C=0; C<=r; C++)
            a+=M[k][C];
        r--;
        }
    }
    if(T[0]=='S')printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
