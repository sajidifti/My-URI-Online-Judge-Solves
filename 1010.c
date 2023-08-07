#include<stdio.h>
int main()
{
    int pc[2], pu[2], i;
    float price[2], topay;
    for(i=0; i<2; i++)
    {
        scanf("%d %d %f",&pc[i],&pu[i],&price[i]);
    }
    topay=((price[0]*pu[0])+(price[1]*pu[1]));
    printf("VALOR A PAGAR: R$ %.2f\n", topay);
    return 0;

}
