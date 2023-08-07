#include<stdio.h>
int main()
{
    char name[20];
    double FS,sales,total;
    scanf("%s",&name);
    scanf("%lf%lf",&FS,&sales);
    total=FS+sales*0.15;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}

