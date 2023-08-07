#include <stdio.h>

int main()
{
    int m, d, i, j;
    int arr[12];
    arr[12]= {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    while(scanf("%d%d", &m, &d) != EOF)
    {
        if(m == 12 && d == 25)
        {
            printf("E natal!\n");
        }
        else if(m == 12 && d > 25)
        {
            printf("Ja passou!\n");
        }
        else if(m == 12 && d == 24)
        {
            printf("E vespera de natal!\n");
        }
        else
        {
            j=arr[m-1]-d;

            for(i = m; i < 12; i++)
                {
                    j=j+arr[i];
                }
            printf("Faltam %d dias para o natal!\n", j);
        }
    }
    return 0;
}
