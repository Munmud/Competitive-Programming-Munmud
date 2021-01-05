#include <stdio.h>
int main()
{
    int i,n,s,a;
    for(i=1;i<=100;i++)
    {
        scanf ("%d",&n);
        if (n>s)
        {
            s=n;
            a=i;
        }
    }

    printf ("%d\n%d\n",s,a);
}
