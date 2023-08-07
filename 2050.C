
#include<stdio.h>
int main()
{
    int n,i,a,m2=0,m3=0,m4=0,m5=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a % 2==0) m2++;
        if(a % 3==0) m3++;
        if(a % 4==0) m4++;
        if(a % 5==0) m5++;
    }
    printf("%d Multiplo(s) de 2\n",m2);
    printf("%d Multiplo(s) de 3\n",m3);
    printf("%d Multiplo(s) de 4\n",m4);
    printf("%d Multiplo(s) de 5\n",m5);
    return 0;
}


