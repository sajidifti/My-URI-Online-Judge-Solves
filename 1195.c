
#include<stdio.h>
int main()
{
    int a=1,b;
    for(b=60;b>=0;b=b-5)
    {
        printf("I=%d J=%d\n",a,b);
        a=a+3;
    }
    return 0;
}
