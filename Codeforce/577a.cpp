#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,x,ans=0,a,b;

    cin>>n>>x;
    for(long long int i=2;i<=n;i++){

        if (x%i==0){
            a=x/i;
            b=i;
                if(a<=n && b<=n){
                    ans++;
                }//cout<<i<<" ";
        }
    }
    if (n>=x)
        ans++;
    cout<<ans<<endl;
}
