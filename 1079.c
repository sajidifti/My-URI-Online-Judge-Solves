#include <stdio.h>

int main()
{
 int n,i;
 double a,b,c,media;
 scanf("%d", &n);
 for (i=0;  n;++i)
 {
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  media =((a/10)*2)+((b/10)*3)+((c/10)*5);

  printf("%.1f\n", media);
 }

 return 0;
}
