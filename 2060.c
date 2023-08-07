#include<stdio.h>
int main()
{
    int n,i,j,k=0,l=0,m=0,o=0;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&j);
        if(j%2==0)
            k++;
        if(j%3==0)
            l++;
        if(j%4==0)
            m++;
        if(j%5==0)
            o++;
    }

    printf("%d Multiplo(s) de 2\n",k);
    printf("%d Multiplo(s) de 3\n",l);
    printf("%d Multiplo(s) de 4\n",m);
    printf("%d Multiplo(s) de 5\n",o);

    return 0;
}
