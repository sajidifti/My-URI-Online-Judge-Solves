#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char ch[102];
    while(scanf("%d",&j)!=EOF)
    {
        getchar();
        for(i = 0;i < j;i++)
        {
            gets(ch);
        }
        printf("Ciencia da Computacao\n");
    }
    return 0;
}
