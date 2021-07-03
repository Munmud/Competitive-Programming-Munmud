#include <stdio.h>
int main()
{
    int i,j,n;
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        if (i%2==0)
        {
            n=i*i;
            printf ("%d^2 = %d\n",i,n);
        }

    }
}
