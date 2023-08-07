#include<stdio.h>
int main()
{
    int i, j, k;

    for (i = 1; i <= 9; i += 2)
    {
            for (j = i,k = 7; (k >= 5); k-=1)
                {
                printf("I=%d J=%d\n", j, k);

                }
    }

    return 0;
}

