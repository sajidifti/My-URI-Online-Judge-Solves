#include <stdio.h>

int main()
{
    double n;
    int a;
    scanf("%lff",&n);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",(n/100));
    a=n%100.00;
    printf("%d nota(s) de R$ 50.00\n",(a/50.00));
    a=a%50.00;
    printf("%d nota(s) de R$ 20.00\n",(a/20.00));
    a=a%20.00;
    printf("%d nota(s) de R$ 10.00\n",(a/10.00));
    a=a%10.00;
    printf("%d nota(s) de R$ 5.00\n",(a/5.00));
    a=a%5.00;
    printf("%d nota(s) de R$ 2.00\n",(a/2.00));
    a=a%2.00;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(a/1.00));
    a=a%1.00;
    printf("%d moeda(s) de R$ 0.50\n",(a/0.50));
    a=a%0.50;
    printf("%d moeda(s) de R$ 0.25\n",(a/0.25));
    a=a%0.25;
    printf("%d moeda(s) de R$ 0.10\n",(a/0.10));
    a=a%0.10;
    printf("%d moeda(s) de R$ 0.05\n",(a/0.05));
    a=a%0.05;
    printf("%d moeda(s) de R$ 0.01\n",(a/0.01));


    return 0;

}
