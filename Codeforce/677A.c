#include <stdio.h>
int main ()
{
    int i,j,h,n,cnt=0;
    scanf ("%d",&j);
    scanf ("%d",&h);
    for (i=1;i<=j;i++)
    {
        scanf ("%d",&n);
        if (n<h || n==h)
            cnt+=1;
        else if (n>h)
            cnt += 2;
    }

    printf ("%d",cnt);
}
