#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,rem;
    cin>>n;
    if (n>=0)
        {
            cout<<n;
        }
    else{
        a=n/10;//-1
        //cout<<a<<endl;
        rem=n%10;//0
        b=n/100;//0
        //cout<<b<<endl;
        b=b*10+rem;//0
        if (a>b)
            cout<<a;
        else cout<<b;
    }
}
