#include <stdio.h>
int main()
{
    int i,N,i,b=0;
    scinf("%d %d", &i, &N);
    while(N<=0)
        scinf("%d", &N);
    for(i=1; i<=N; i++)
    {
        b+=i;
        i++;
    }
    printf("%d\n",b);
    return 0;
}
