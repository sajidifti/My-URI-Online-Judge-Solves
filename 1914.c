#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    long long int a,b;
    char s1[101],s2[6],s3[101],s4[6];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%s %s %s %s",s1,s2,s3,s4);
        scanf("%lld %lld",&a,&b);
        a = a + b;
        if(s2[0]=='I')
        {
            if(a%2==0)
                 {
                     printf("%s\n",s3);
                 }
            else
                 {
                     printf("%s\n",s1);
                 }
        }
        else
        {
            if(a%2==0)
                 printf("%s\n",s1);
            else
                 printf("%s\n",s3);
        }
    }
    return 0;
}
