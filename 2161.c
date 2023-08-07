#include <stdio.h>
int main()
{
    double n, i, a = 0.0;
    scanf("%lf", &n);
    for(i=n;i>=0;i--)
    {
        a=a+6.0;
        a=1.0/a;
    }
    a=a+3.0;
    printf("%.10lf\n", a);
    return 0;
}
