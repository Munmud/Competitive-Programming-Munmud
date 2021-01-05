#include <stdio.h>
int main ()
{
    int i,j,a,b;
    int cnta=0,cntb=0;
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);

        if (a>b)
            cnta++;
        else if (b>a)
        cntb++;
    }
    if (cnta>cntb)
        printf ("Mishka");
    else if (cnta<cntb)
        printf ("Chris");
    else printf ("Friendship is magic!^^");
}
