#include<stdio.h>
int main()
{
 float n,a,b,c,d,e;
 scanf("%f", &n);
 if (n <= 400.0)
    {
        a=n*1.15;
        b=n*0.15;
        c=n*1.12;
        d=n*0.12;
        e=n*1.10;
        f=n*0.10;
        g=n*1.07;
        h=n*0.07;
        i=n*1.04;
        j=n*0.04;


        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", a, b);
        else if (n <= 800.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", c, d);
        else if (n <= 1200.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",e ,f );
        else if (n <= 2000.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", g, h);
        else
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",i , j);

 return 0;
}

