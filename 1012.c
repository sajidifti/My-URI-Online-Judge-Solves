#include<stdio.h>
int main()
{
    double arr[3],a,b,pi=3.14159,c,d,e;
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%lf",arr[i]);
    }
    a=0.5*arr[0]*arr[1];
    b=pi*arr[2]*arr[2];
    c=0.5*(arr[0]+arr[1]);
    d=arr[1]*arr[1];
    e=arr[0]*arr[1];
    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);
    return 0;
}
