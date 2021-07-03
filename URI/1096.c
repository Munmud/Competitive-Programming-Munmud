#include <stdio.h>
int main ()
{
    int i ,j,k;
    for (i=1;i<=9;i=i+2)
    {
        for (j=1;j<=3;j++)
        {
            for (k=7;k>=5;k=k-1)
                printf ("I=%d J=%d\n",i,k);
            break;
        }
    }
}
