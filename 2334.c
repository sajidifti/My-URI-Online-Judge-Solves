#include <stdio.h>

int main()
{
    long long int n,m;

    while(scanf("%llu", &n)!=EOF)
    {
        if(n == -1ll)break;

        if(n == 0ll)
        {
            printf("0\n");
        }
        else
        {
            m=n - 1ll;
            printf("%llu\n", m);
        }
    }

    return 0;
}
