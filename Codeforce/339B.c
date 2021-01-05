#include <stdio.h>
int main()
{
    long long int n,t,i,s,ans=0,now;

    scanf ("%lld",&n);
    scanf ("%lld",&t);

    now=1;

    for (i=0;i<t;i++)
    {
        scanf("%lld",&s);
        if (s>=now)
        {
            ans+=s-now;
            now=s;
        }
        else
        {
            ans+=n-now+s;
            now=s;
        }
    }

    printf ("%lld",ans);
}
