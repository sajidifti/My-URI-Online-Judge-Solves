#include<stdio.h>
int main()
{
    int i,j,k,n;
    float arr[7]={1.50,2.50,3.50,4.50,5.50},cal;
    scanf("%d",&n);

        cal=0;
        for(i = 0;i < n;i++)
        {
            scanf("%d %d",&j, &k);
            j=j%1000;
            cal += k * arr[j-1];
        }
        printf("%.2f\n",cal);

    return 0;
}
