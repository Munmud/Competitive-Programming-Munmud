#include <stdio.h>
int main ()
{
    long long int testCase,a[100000]={0},temp,max,sum,neg,t;
    long long int i,j,n;
    scanf ("%lld",&testCase);
    while (testCase--)
    {
        max=0;
        neg=0;
        sum=0;
        t=0;

        scanf ("%lld",&n);
        for (i=1;i<=n;i++)
        {
            scanf ("%lld",&temp);
            sum+=temp;
            a[i]=a[i-1]+temp;
        }

        for (i=1;i<n;i++)
        {
            if (a[i]>=sum || sum-a[i]>=sum )
            {
                printf ("NO\n");
                t=1;
                break;
            }
        }
        if (!t)
            printf ("YES\n");

    }
}
