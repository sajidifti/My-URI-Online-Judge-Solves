#include <stdio.h>
int main()
{
        int a,b,c,d=0;
        scanf("%d%d", &a, &b);
        if(a<=0 || b<=0)break;
        else
        {
            d=0;
            if(a<b)
            {
                for(c=a; c<=b; c=c+1)
                {
                    printf("%d ",c);
                    d=d+c;
                }
                printf("Sum=%d\n",d);
            }
            else if(a>b)
            {
                for(c=b; c<=a; c=c+1)
                {
                    printf("%d ",c);
                    d=d+c;
                }
                printf("Sum=%d\n",d);
            }
        }
    return 0;
}

