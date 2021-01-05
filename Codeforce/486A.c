#include <stdio.h>
int main()
{
    long long int n,last1,last2;
    long long int sum1,sum2,sum;

    scanf ("%lld",&n);

    if (n%2==0)
    {
        last1=-1+(n/2-1)*(-2);
        last2=2+(n/2-1)*2;

        sum1=n*(-1+last1)/4;
        sum2=n*(2+last2)/4;
        sum=sum1+sum2;
    }
    else
    {
        last1=-1+((n+1)/2-1)*(-2);
        last2=2+((n-1)/2-1)*2;

        sum1=(n+1)/2*(-1+last1)/2;
        sum2=(n-1)/2*(2+last2)/2;
        sum=sum1+sum2;
    }
    printf ("%lld\n",sum);
}
