#include <stdio.h>
int main()
{
    int i,j,n,s=0,a,b;

    scanf("%d",&j);

    for (i=1;i<=j;i++)
    {
        scanf ("%d",&n);

        for(n=n;n>0;n=n/2)
        {
            a=n%2;
            s=s+a;
        }

        b=s%2;
        s=0;

        if (b==0)
            printf ("Case %d: even\n",i);
        else printf ("Case %d: odd\n",i);
    }

}
/*if (n%2==0)
            printf ("Case %d: even\n",i);
        else printf ("Case %d: odd\n",i);*/
