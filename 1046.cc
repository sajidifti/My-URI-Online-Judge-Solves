
#include<stdio.h>
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    if (a==b)

        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (b>a)
    {
        c=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else if(a>b)
    {
        d=24+b;
        e=d-a;
        printf("O JOGO DUROU %d HORA(S)\n",e);
    }
    return 0;
}
