#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n,noled;
    char s[102];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        noled=0;
        scanf("%s",&s);
        k = strlen(s);

        for(j = 0;j < k;j++)
        {
            if(s[j]=='1')
            {
                noled+=2;
            }
            else if( s[j]=='2' || s[j]=='3' || s[j]=='5')
            {
                noled+=5;
            }
            else if( s[j]=='4')
            {
                noled+=4;
            }
            else if( s[j]=='0' || s[j]=='9' || s[j]=='6')
            {
                noled+=6;
            }
            else if( s[j]=='7')
            {
                noled+=3;
            }
            else if( s[j]=='8')
            {
                noled+=7;
            }
        }
        printf("%d leds\n",noled);
    }

    return 0;
}
