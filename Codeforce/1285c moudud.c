
#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a, long long int b)
{
	long long int res;
	res=(a*b)/__gcd(a, b);
	return res;
}
int main()
{
	long long int t, n, a, b, r, i;
    cin>>n;
    r=sqrt(n);
    if(r*r==n && n!=1)
    r--;
    for(i=r; i>0; i--)
    {
    	if(n%i==0)
    	{
    		a=i;
    		b=n/a;
    		if(lcm(a, b)==n)
    		break;
		}
	}
	b=n/a;
	cout<<a<<" "<<b<<endl;
}
