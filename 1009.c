#include<stdio.h>
int main()
{
    char name[20];
    double FxS,sales,total;
    scanf("%s",&name);
    scanf("%lf%lf",&FxS,&sales);
    total=FxS+sales*0.15;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
