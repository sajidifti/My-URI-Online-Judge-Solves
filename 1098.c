#include <stdio.h>
int main()
{
    float i, j, k;
    int l, l2;
    for (i = 0, j = 1, k = 0, l = 0, l2 = 0; i < 2.2; j++)
    {
        if(l2 == 0)
            {
            printf("I=%.0f J=%.0f\n", i, j);
        }
        else
        {
            printf("I=%.1f J=%.1f\n", i, j);

        }
        l++;
        if(l == 3)
            {
                i += 0.2;
                k += 0.2;
                j = k;
                l = 0;
                l2++;
        }
        if(l2 == 5)
            l2 = 0;
    }
    return 0;
}
//sajid anam ifti\\
