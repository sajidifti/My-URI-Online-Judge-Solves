#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf",&a);

        scanf("%lf",&b);
        c=b-a;
        a=100.00/a;
        printf("%.2f%%\n",c*a);

    return 0;
}
