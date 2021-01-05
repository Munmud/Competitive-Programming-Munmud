#include <bits/stdc++.h>
#include <set>
#include <iterator>
using namespace std;
int main ()
{
    int n,k,x,temp=0;
    multiset <int> s;
    multiset <int>::iterator it;

    cin>>n>>k;

    for (int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }

    for (it=s.begin();it!=s.end();it++)
        {
            if (*it<=5-k){
                temp++;
            }
            else break;
        }
        cout<<temp/3<<endl;
}
