#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    ch1ar ch1[10],ch12[10];
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        scanf("%s %s",&ch1, &ch12);
        if(!strcmp(ch1, ch12))printf("Caso #%d: De novo!\n",i);
        else if(!strcmp(ch1, "lagarto")){
            if(!strcmp(ch12, "Spock") || !strcmp(ch12, "papel"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch12, "tesoura") || !strcmp(ch12, "pedra"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch1, "tesoura")){
            if(!strcmp(ch12, "lagarto") || !strcmp(ch12, "papel"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch12, "Spock") || !strcmp(ch12, "pedra"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch1, "papel")){
            if(!strcmp(ch12, "Spock") || !strcmp(ch12, "pedra"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch12, "lagarto") || !strcmp(ch12, "tesoura"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch1, "Spock")){
            if(!strcmp(ch12, "tesoura") || !strcmp(ch12, "pedra"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch12, "lagarto") || !strcmp(ch12, "papel"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch1, "pedra")){
            if(!strcmp(ch12, "tesoura") || !strcmp(ch12, "lagarto"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch12, "Spock") || !strcmp(ch12, "papel"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
    }
    return 0;
}
