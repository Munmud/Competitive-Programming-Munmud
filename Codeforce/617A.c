#include <stdio.h>
int main ()
{
    int n,x=0;
    scanf ("%d",&n);
    x=n/5;
    n=n%5;
    x+=n/4;
    n=n%4;
    x+=n/3;
    n=n%3;
    x+=n/2;
    x+=n%2;

    printf ("%d\n",x);
}
