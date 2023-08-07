#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%d",&n);
    a=n/100;
    b=n%100;
    c=b/50;
    d=b%50;
    e=d/20;
    f=d%20;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=j/2;
    l=j%2;
    printf("%d nota(s) de R$ 100,00",a);
    printf("\n");
    printf("%d nota(s) de R$ 50,00",c);
    printf("\n");
    printf("%d nota(s) de R$ 20,00",e);
    printf("\n");
    printf("%d nota(s) de R$ 10,00",g);
    printf("\n");
    printf("%d nota(s) de R$ 5,00",i);
    printf("\n");
    printf("%d nota(s) de R$ 2,00",k);
    printf("\n");
    printf("%d nota(s) de R$ 1,00",l);
    printf("\n");
    return 0;
}
