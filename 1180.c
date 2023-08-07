#include <stdio.h>
int main()
{
   int a,b,c,d,e,N, pos, min;
    scanf("%d", &N);
    int X[N];
    for(a=0; a<N; a++)
        {
            scanf("%d", &X[a]);
        }

    min=X[0];

    for(a=1; a<N; a++)
    {
        if(min>X[a])
        {
            min=X[a];
            pos=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, pos);

    return 0;
}

