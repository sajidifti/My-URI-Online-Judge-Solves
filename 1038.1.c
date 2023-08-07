
#include<stdio.h>
int main()
{
    int X,Y;
    float Z;
    scanf("%d%d",&X,&Y);
    if(X==1)
    {
        Z=(4.00*Y);
    }
    else if(X==2)
    {
        Z=(4.50*Y);
    }
    else if(X==3)
    {
        Z=(5.00*Y);
    }
    else if(X==4)
    {
        Z=(2.00*Y);
    }
     else if(X==5)
    {
        Z=(1.50*Y);
    }
    {
    printf("Total: R$ %.2f\n",Z);
    }
    return 0;
}
