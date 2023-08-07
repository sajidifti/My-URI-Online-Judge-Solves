#include <stdio.h>

int main()
{
    int M;
    while(scanf("%d", &M) != EOF)
    {
        M=M%360;

        if(M<90 && M>=0)
            printf("Bom Dia!!\n");

        else if(M>=90 && M<180)
            printf("Boa Tarde!!\n");

        else if(M>=180 && M<270)
            printf("Boa Noite!!\n");

        else if(M>=270 && M<360)
            printf("De Madrugada!!\n");
    }
    return 0;
}
