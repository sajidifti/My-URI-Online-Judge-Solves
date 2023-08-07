#include<stdio.h>
int main()
{
    int N,i,j=0,k=1,l=0;
    scanf("%d", &N);
    for(i=1; i<N; i++)
    {
        if(i%2==1)
        {
            printf("%d ",l);
            l=j+k;
            j=l;
        }
        else if(i==2)
            printf("%d ",l);
        else if(i%2==0)
        {
            printf("%d ",l);
            l=j+k;
            k=l;
        }
    }
    printf("%d\n",l);
    return 0;
}
