#include <stdio.h>
int main()
{
    int test_case;
    int n,k,a,b,ans,temp;
    scanf ("%d",&test_case);
    while (test_case--)
    {
        ans=0;
        scanf ("%d %d",&n ,&k);

        a=n/k;
        b=n%k;
        ans+=a*k;
        temp=k/2;
        if (temp<=b)
            ans+=temp;
        else if (temp>b)
            ans+=b;

        printf ("%d\n",ans);

    }
}
