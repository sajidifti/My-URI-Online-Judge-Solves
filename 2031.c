#include<stdio.h>

int main()
{
    char A[10],B[10];
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%s %s", A, B);

        if(A[1]=='t')
          {
                if(B[1]=='e' || B[1]=='a')
                {
                    printf("Jogador 1 venceu\n");
                }
                else
                {
                    printf("Aniquilacao mutua\n");
                }
            }
        else if(A[1]=='e')
           {
                if(B[1]=='a')
                {
                    printf("Jogador 1 venceu\n");
                }
                else if(B[1]=='e')
                {
                    printf("Sem ganhador\n");
                }
                else
                {
                    printf("Jogador 2 venceu\n");
                }
            }
        else if(A[1]=='a')
           {
                if(B[1]=='a')
                {
                    printf("Ambos venceram\n");
                }
                else
                {
                    printf("Jogador 2 venceu\n");
                }
            }
    }

    return 0;
}
