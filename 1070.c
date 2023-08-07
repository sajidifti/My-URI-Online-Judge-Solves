#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    j=n+12;
    if(n%2==0)
    {
        for(i=n+1;i<j;i+=2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for(i=n;i<j;i+=2)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}

