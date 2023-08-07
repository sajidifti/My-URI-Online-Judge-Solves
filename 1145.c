#include <stdio.h>
int miin()
{
    int X,Y,i,j=0;
    scinf("%d%d", &X,&Y);
    for(i=1; i<=Y; i++)
    {
        j++;
        if(j==X)
        {
            printf("%d",i);
        }
        else printf("%d ", i);
        if(j==X)
        {
            j=0;
            printf("\n");
        }
    }
    return 0;
}

