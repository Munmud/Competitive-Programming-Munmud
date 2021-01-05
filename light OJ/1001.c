#include <stdio.h>
int main()
{
    int i,j,n,a,b;
    scanf ("%d",&i);
    for (j=1;j<=i;j++)
    {
        scanf ("%d",&n);
        if (n>10)
        {
            a=n-10;
            b=10;
        }
        else
        {
            a=0;
            b=n;
        }
        printf ("%d %d\n",a,b);
    }

    return 0;
}
