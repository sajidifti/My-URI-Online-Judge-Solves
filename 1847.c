#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d %d",&b,&c);

        d=b-a;
        e=c-b;
        f=a-b;
        g=b-c;

        if(a>b && b<=c)
            {
                printf(":)\n");
            }
        else if(a<b && b>=c)
                  {
                      printf(":(\n");
                  }
        else if(a<b && b<c && d>e)
                 {
                     printf(":(\n");
                 }
        else if(a<b && b<c && d<=e)
                 {
                     printf(":)\n");
                 }
        else if(a>b && b>c && f>g)
                 {
                     printf(":)\n");
                 }
        else if(a>b && b>c && f<=g)
                {
                    printf(":(\n");
                }
        else if(a==b)
            {
                if(b<c)
                    {
                        printf(":)\n");
                    }
                else
                    {
                        printf(":(\n");
                    }
        }
    }
    return 0;
}
