#include <stdio.h>
#include <string.h>
int main()
{
    int n, a, m;
    char str[10];
    scanf("%d %d", &n, &m);
    a = n;
    while(m--)
    {
        scanf("%s", str);
        if(str[0] == 'f')
        {
            a++;
        }
        else
        {
            a--;
        }
    }
    printf("%d\n", a);
    return 0;
}
