
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int testCase;
    while (testCase--)
    {
        int n,d,temp;
        cin>>n>>d;
        if (n>=d)
            cout<<"YES"<<endl;
        else
        {
            for (i=1;;i++)
            {
                temp=ceil(d/i);
                cout<<temp<<" ";
            }
        }

    }
}
