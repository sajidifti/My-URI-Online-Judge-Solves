#include <stdio.h>
int main()
{
    int N[1500], n, i, j;
    scanf ("%d", &n);
    for(i=0,j=0; i<1500; i++)
    {
        printf("N[%d] = %d\n", i, j);
        j++;
        if(j==n)
            {
                j=0;
            }
    }
    return 0;
}
