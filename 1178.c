#include<stdio.h>
int main()
{
    int j;
    double a[100],i;
    scanf("%lf",&i);
    for(j=0;j<100;j++)
    {
        a[j]=i;
        printf("N[%d] = %.4lf\n",j,a[j]);
        i=i/2;
    }
    return 0;
}
