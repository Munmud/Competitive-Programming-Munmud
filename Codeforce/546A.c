#include <stdio.h>
int main()
{
    int p,k,n,w,t,sum=0;
    scanf ("%d %d %d",&k,&n,&w);
    for (t=1;t<=w;t++)
    {
        sum+=k*t;
    }
    p=sum-n;

    if (p>0)
        printf ("%d",p);
    else printf ("0");
}
