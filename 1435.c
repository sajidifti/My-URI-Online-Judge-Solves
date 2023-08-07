#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0,g,h,i;
    while(1)
    {
        scanf("%d",a);
        int arr[a][a];
        if(a==0) break;
        else
        {
            if(a%2==0) b=a/2;
            else if(a%2==1) b=(a/2)+1;
            g=a-1;
            for(c=1;c<=b;c++)
            {
                for(d=f;d<=g;d++)
                    for(e=f;e<=g;e++)
                        arr[d][e]=c;
            }
            f++;
            g--;
        }
        for(h=0;h<a;h++)
    {
        for(i=0;i<a;i++)
            printf("%d",arr[h][i]);
    }
    printf("\n");
    }
    printf("\n");


}
