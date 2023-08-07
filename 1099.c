#include <stdio.h>
int main()
{
    int n,X,Y,a,b,c=0;
    scanf("%d", &n);
    for(a=1;a<=n;a=a+1)
    {
        scanf("%d%d",&X,&Y);
        if(X==Y)
        {
            c=0;
            printf("%d\n",c);
        }
        else if(X<Y)
        {
            for(b=X+1,c=0;b<Y;b=b+1)
            {
                if(b%2==1||b%2==-1)
                    c=c+b;
            }
            printf("%d\n",c);
        }
        else
        {
            for(b=Y+1,c=0;b<X;b=b+1)
            {
                if(b%2==1||b%2==-1)
                    c=c+b;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
