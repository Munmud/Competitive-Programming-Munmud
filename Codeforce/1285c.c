#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
int gcd(long long int n1,long long int n2)
{
    long long int temp;
    if (n1<n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    long long int rem;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;
}
int lcm(long long int n1,long long int n2)
{
    return (n1*n2)/__gcd(n1, n2);
}
int main ()
{
    long long int n,i,temp;
    scanf ("%lld",&n);
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
