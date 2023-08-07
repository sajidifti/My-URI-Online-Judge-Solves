#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d",&a)!=EOF)
    {
        scanf("%d %d %d",&b, &c, &d);
        e=a+b+c+d;
        f=e-3;
        printf("%d\n",f);
    }
    return 0;
}
