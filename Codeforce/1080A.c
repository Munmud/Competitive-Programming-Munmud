#include <stdio.h>
int main()
{
    int n,k,r,g,b,cnt=0;
    scanf ("%d %d",&n,&k);

    r=n*2;
    g=n*5;
    b=n*8;

    if (r%k==0)
        cnt+=r/k;
    else cnt+=r/k+1;
    if (g%k==0)
        cnt+=g/k;
    else cnt+=g/k+1;
    if (b%k==0)
        cnt+=b/k;
    else cnt+=b/k+1;

    printf ("%d",cnt);
}
