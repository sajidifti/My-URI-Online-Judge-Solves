#include <stdio.h>
int main()
{
    int a,b,count=0,i=0,j,g=0,d=0;
    while(1)
    {
    scanf("%d%d",&a,&b);
    printf("Novo grenal (1-sim 2-nao)\n");
    count++;

    if(a>b)i++;
    else if(a<b)
    {
        g++;
    }
    else
    {
        d++;
    }

    scanf("%d",&j);

    if(j==1)
    {
        continue;
    }
    else
    {
        break;
    }
    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",d);

    if(i>g)
    {
        printf("Inter venceu mais\n");
    }
    else if(i<g)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("N�o houve vencedor\n");
    }

    return 0;

}

