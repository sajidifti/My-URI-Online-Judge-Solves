#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i;
    char s[100];

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%s %d",s,&b);

        if(!strcmp(s, "Thor"))
             {
                 printf("Y\n");
             }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
