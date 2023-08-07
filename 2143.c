#include <stdio.h>

int main()
{
    int T, i, n;
    while(1)
    {
        scanf("%d", &T);

        if(T==0)break;
        else
        {
            for(i=1; i<=T; i++)
          {
            scanf("%d", &n);
            if(n%2)
            {
                printf("%d\n", n*2-1);
            }
            else
            {
                printf("%d\n", n*2-2);
            }
          }
        }
    }
    return 0;
}
