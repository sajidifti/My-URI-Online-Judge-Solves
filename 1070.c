#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=n+1;i<n+12;i+=2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for(i=n;i<n+12;i+=2)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
