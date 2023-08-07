//sajid anam ifti\\

#include <stdio.h>
int main()
{
    double a[6],sum=0,avg=0;
    int i,count=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a[i]);
    }


      for(i=0;i<6;i++)
      {
          if(a[i]>0)
        {
            count++;
            sum=sum+a[i];
            avg=sum/count;
        }
      }

    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);

    return 0;
}
