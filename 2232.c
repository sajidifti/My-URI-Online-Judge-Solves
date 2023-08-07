#include <stdio.h>
#include<math.h>
int main()
{
    int a, sum=0, n, i, j;
    scanf("%d", &a);
    for(j=1;j<=a;j++)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            {
                sum += pow(2, i);
            }
        printf("%d\n", sum);
    }
    return 0;
}
