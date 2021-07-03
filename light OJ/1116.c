#include <stdio.h>
int main ()
{
    int i,j;
    long long w;
    long long o;
    long long e;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%lld",&w);
        if (w%2 !=0)
        {
            printf ("Case %d: Impossible\n",i);
            continue;
        }
        o=w/2;
        e=2;
        while (o%2==0)
        {
            o=o/2;
            e=e*2;
        }
        printf ("Case %d: %lld %lld\n",i,o,e);
    }
}
