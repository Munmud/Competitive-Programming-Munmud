#include <stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf ("%d",&n);

     cnt+=n/100;
     n=n%100;
     cnt+=n/20;
     n=n%20;
     cnt+=n/10;
     n=n%10;
     cnt+=n/5;
     cnt+=n%5;

     printf ("%d\n",cnt);
}
