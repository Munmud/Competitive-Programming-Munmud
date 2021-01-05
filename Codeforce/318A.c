#include <stdio.h>
int main ()
{
    long long int a,b;
    scanf ("%lld %lld",&a,&b);
    printf ("%lld",b<=((a+1)/2)?b*2-1:(b-(a+1)/2)*2);
}
