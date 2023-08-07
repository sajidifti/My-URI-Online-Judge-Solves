#include<stdio.h>
int main()
{
    int n=0,i,j,a,m=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);
        n++;
        if(a>m)
        {
            m=a;
            j=n;
        }
    }
    printf("%d\n%d\n",m,j);
    return 0;
}

