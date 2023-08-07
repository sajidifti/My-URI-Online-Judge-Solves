#include <stdio.h>
int main()
{
    int x,a,i,j=0,k=0;

    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        scanf("%d", &a);
        if(a >= 10 && a <= 20)
            {
            j++;
        }
        else
            {
            k++;
        }

    }
    printf("%d in\n", j);
    printf("%d out\n", k);

    return 0;
}
