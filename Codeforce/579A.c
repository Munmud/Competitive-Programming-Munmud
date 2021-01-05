#include <stdio.h>
int count=0;
int checkMe(int n)
{
    int i;
    int sum=0;
    count++;

    for (i=1;i<=n;i*=2)
    {
        sum=i;
    }
    return n-sum;
}
int main ()
{
    int n,i,d;
    scanf ("%d",&n);
    d=n;
    while (d!=0)
    {
        d=checkMe(d);
    }
    printf ("%d\n",count);
}
