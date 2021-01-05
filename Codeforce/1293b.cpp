
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double n;
    double x=0.0,ans=0;
    cin>>n;

    for(double i=1;i<=n;i++){
        x=(1.0/i);
        ans+=x;
        //cout<<x<<endl;
    }
    printf ("%.12lf",ans);
}
