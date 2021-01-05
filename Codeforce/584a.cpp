#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,t,temp=0,temp2=1,x=0,i;
    cin>>n>>t;

    if (n==1 &&t==10){
        cout<<-1<<endl;
        return 0;
        }
    else if (t==10){
        cout<<1;
        n-=1;
        while(n--)
            cout<<0;
        return 0;
    }
    while(n--)
        cout<<t;

}
