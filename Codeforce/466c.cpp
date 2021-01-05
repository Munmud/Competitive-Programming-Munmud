#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,a[500002];
    long long int sum=0;
    cin>>n;

    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if (sum%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }

    long long int one_third=sum/3;
    long long int two_third=one_third*2;
    long long int s=0,ans=0;
    long long int one_third_count=0;

    for (i=1;i<n;i++)
    {
        s+=a[i];
        if (s==two_third)
            ans+=one_third_count;
        if (s==one_third)
            one_third_count++;
    }

    cout<<ans<<endl;

    return 0;

}
