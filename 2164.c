#include <stdio.h>
#include<math.h>
int main()
{
    double n, a, b, c, d, e, sum;
    scanf("%lf", &n);
    d=1 + sqrt(5)
    a = d/2.0;
    e=1 - sqrt(5);
    b = e/2.0;
    c=pow(a,n) - pow(b,n);
    sum = c/sqrt(5);
    printf("%.1lf\n", sum);
    return 0;
}
