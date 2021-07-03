#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int testCase;
    cin>>testCase;

    while (testCase--)
    {
        int n;
        cin>>n;
        if (360%(180-n)==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
