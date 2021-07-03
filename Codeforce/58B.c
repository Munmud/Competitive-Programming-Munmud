#include <stdio.h>
int main()
{
    int x,n,i;
    scanf ("%d",&n);
    printf ("%d",n);
    x=n;
    while (x!=1)
    {
        for (i=x-1;i>0;i--)
        {
            if (n%i==0)
            {
                n=i;
                x=i;
                printf (" %d",x);
                break;
            }
        }
    }
}
