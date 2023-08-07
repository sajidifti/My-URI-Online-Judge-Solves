#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&j,&k);
        printf("%d\n",j+k);
    }
    return 0;
}
