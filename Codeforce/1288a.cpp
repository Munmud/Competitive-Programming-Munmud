
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int testCase;
    int n,d,temp,x;
    cin>>testCase;
    while (testCase--)
    {
        cin>>n>>d;
        if (n>=d)
            {cout<<"YES"<<endl;}
        else
        {
           x=n/2;
           temp=ceil(d/(x+1.0));
           if (x+temp<=n)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
        }
    }
}

