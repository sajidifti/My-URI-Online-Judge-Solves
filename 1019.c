#include<stdio.h>
int main()
{
    int n,y,y1,m,d;
    scanf("%d",&n);
    y=n/365;
    y1=n%365;
    m=y1/30;
    d=y1%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
