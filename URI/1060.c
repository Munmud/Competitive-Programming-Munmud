#include <stdio.h>
int main()
{
    double i,t=0.0,n;
    for (i=1;i<7;i++)
    {
        scanf ("%lf",&n);
        if (n>=0.0)
            t=t+1.0;

    }
    printf ("%.0lf valores positivos\n",t);
}

