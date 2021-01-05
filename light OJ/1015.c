#include <stdio.h>
int main()
{
    int i,j,k,l,s=0,n;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%d",&l);
        for  (k=1; k<=l;k++)
        {
            scanf ("%d",&n);
            if (n<0)
                n=0;
            s=s+n;
        }
        printf ("Case %d: %d\n",i,s);
        s=0;
    }
}
