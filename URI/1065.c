#include <stdio.h>
int main ()
{
    int i,j,n,t=0;
    for (i=0;i<5;i++)
    {
        scanf ("%d",&n);
        if (n%2==0)
            t=t+1;
    }
    printf ("%d valores pares\n",t);
}
