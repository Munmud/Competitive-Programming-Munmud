#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
long long int lcm(long long int n1,long long int n2)
{
    return (n1*n2)/__gcd(n1, n2);
}
int main ()
{
    long long int n,i,temp;
     cin>>n;
        if(n==1)
       {
           printf ("1 1\n");
           return 0;
       }
    i=sqrt(n);
    if (i*i==n)
        i--;
    for (;i>0;i--)
    {
        if (n%i==0)
        {
            temp=n/i;
            if(lcm(i,temp)==n)
            break;
        }
    }
    printf ("%lld %lld\n",i,temp);

}
