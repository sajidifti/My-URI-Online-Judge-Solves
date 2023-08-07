#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&j);
        if(j > 2015)
             {
                k=j-2014;
                 printf("%d A.C.\n",k);
             }
        else if(j < 2015)
                  {
                     l= 2015-j
                      printf("%d D.C.\n",l);
                  }
        else
             {
                 printf("1 A.C.\n");
             }
    }

    return 0;
}
