#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a,b,temp,m_count,n_count;
    int ma=INT_MAX;
    cin>>n>>m>>a>>b;

    m_count=n/m+1;

    for(int i=m_count;i>=0;i--)
    {
        if (i*m>=n)
        n_count=0;
        else n_count=n-i*m;
        //if (i*m+n_count>=n)
            temp=i*b+n_count*a;
        if (temp<ma)
            ma=temp;
    }


    cout<<ma;

}
