#include<stdio.h>
int main()
{
    int i,j,k,n;
    long long a[60];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=60;i++)
    {
    a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,a[k]);
    }
    return 0;
}
