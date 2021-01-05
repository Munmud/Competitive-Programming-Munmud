#include <bits/stdc++.h>
using namespace std;
int check(char x)
{
    int p;
    p=(int)x;
    return p-48;
}

int main ()
{
    int n,t1,t2,temp,ans=0;
    char *x,*y;
    cin>>n;

    x=new char[n];
    y=new char[n];

    cin>>x>>y;

    int a,b;
    for(int i=0;i<n;i++){
            t1=t2=0;
            temp=a=check(x[i]);
            b=check(y[i]);
        temp=abs(a-b);
        //cout<<temp<<" ";
        if (temp>5)
            temp=10-temp;
        //cout<<temp<<endl;

        ans+=temp;
    }
    cout<<ans<<endl;

}
