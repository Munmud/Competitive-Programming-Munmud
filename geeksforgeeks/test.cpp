#include<bits/stdc++.h>
#define ll long long int
#define M 5000010
int a[M];
using namespace std;
ll sum(ll n,ll d)
{
    ll i,r;
    r=n;
     for(i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
               while(n%i==0)
               {
                   n/=i;
               }
               r-=r/i;
           }
       }
       if(n>1)
        r-=r/n;
        a[d]=r*r;
}
int main()
{
    ll n,t,c=0,i,j,b[100000],d,a1,b1;
    for(n=2;n<=(500ll);n++)
    {
         d=n;
        sum(n,d);
    }
    for(i=2;i<=100;i++)
        cout<<a[i]<<endl;
}