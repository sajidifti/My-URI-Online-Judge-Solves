//SaJid AnAm iFTi\\

#include <stdio.h>
int main()
{
 float n, r, a, b, c;
 scanf("%f", &n);

 if(n <= 2000)
    {
  printf("Isento\n");
    }
 else
    {
  if(n > 2000 && n <= 3000)
  {
   a = n - 2000;
   a = ((a*8)/100);
   r = a;
  }
 else if(n > 3000 && n <= 4500)
    {
   a = n-2000;
   b = a-1000;
   a -= b;
   a = ((a*8)/100);
   b = ((b*18)/100);
   r = b+a;
    }
 else
    {
   a = n - 2000;
   b = a - 1000;
   c = b - 1500;
   a -= b;
   b -= c;
   a = ((a*8)/100);
   b = ((b * 18)/100);
   c = ((c * 28)/100);
   r = c+b+a;
  }
  printf("R$ %.2f\n", r);
  }

 return 0;
}
