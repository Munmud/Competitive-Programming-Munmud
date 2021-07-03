#include <stdio.h>
int main()
{
    int i,j;
    long long n;
    long long m;
    long long s;
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%lld %lld",&n,&m);
        s= (n*m)/2;
        printf ("Case %d: %lld\n",i,s);
    }

    return 0;
}
