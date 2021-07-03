#include <stdio.h>
#include <math.h>
int main ()
{
    int r,b,s;
    scanf ("%d",&r);
    scanf ("%d",&b);
    s= abs(r-b);

    if (r>b)
    {
        printf ("%d ",b);
        printf ("%d",s/2);
    }
    else if (r<b)
    {
        printf ("%d ",r);
        printf ("%d",s/2);
    }
    else
    {
        printf ("%d ",r);
        printf ("%d",s/2);
    }
}
