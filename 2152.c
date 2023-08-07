#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    while(a--)
    {
        scanf("%d %d %d", &b, &c, &d);
        if(b<10)
        {
            printf("0%d:", b);
        }
        else
        {
            printf("%d:", b);
        }
        if(c<10)
        {
            printf("0%d", c);
        }
        else
        {
            printf("%d", c);
        }
        if(d == 0)
        {
            printf(" - A porta fechou!\n");
        }
        else
        {
            printf(" - A porta abriu!\n");
        }
    }

    return 0;
}

