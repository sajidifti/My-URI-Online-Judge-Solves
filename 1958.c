#include <stdio.h>
#include<string.h>

int main()
{
    long double X;

    char str[111];

    scanf("%LE", &X);

    sprintf(str,"%LE", X);

    if(str[0]!='-')
        {
            printf("+");
        }

    printf("%.4LE\n", X);

    return 0;
}
