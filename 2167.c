#include <stdio.h>
int main()
{
    int n, a = 0, b, c = 0, d = 0, e = 1, i;
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        scanf("%d", &b);
        c++;
        if(b<a && e==1)
        {
            d = c;
            e = 0;
        }
        a = b;
    }
    printf("%d\n", d);
    return 0;
}
