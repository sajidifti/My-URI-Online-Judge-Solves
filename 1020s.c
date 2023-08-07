#include <stdio.h>

int main()
{
 int n,a,A,M,m,d;

 scanf("%d", &n);

 a = n / 365;
 A = n % 365;
 M = A % 30;
 m = A / 30;
 d = M % 30;

 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

 return 0;
}

