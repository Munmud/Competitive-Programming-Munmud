#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;



int main ()
{
    vector <ll> v;
    ll n,x,ans=0;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(int i=1;i<=n;i++){
        ans+=abs(i-v[i-1]);
    }
    cout<<ans<<endl;



}
