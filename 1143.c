#include <stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        b=i*i;
        c=i*i*i;
        printf("%d %d %d\n",i,b,c);
    }
    return 0;
}
