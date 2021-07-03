#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n,m,i=0,testcase,number,a,b;
    int na[21][21],ma[21][21],tempa[21];
    scanf ("%d %d",&n,&m);

    for (i=0;i<n;i++)
    {
        scanf ("%s",na[i]);
        //strcpy(na[i],tempa);
    }

    for (i=0;i<m;i++)
    {
        scanf ("%s",ma[i]);
        //strcpy(ma[i],tempa);
    }

    scanf ("%d",&testcase);
    while (testcase--)
    {
        scanf ("%d",&number);
        a=number%n-1;
        b=number%m-1;
        if (a==-1)
            a=n-1;
        if (b==-1)
            b=m-1;

        printf ("%s",na[a]);
        printf ("%s",ma[b]);
        printf ("\n");
    }

    return 0;

}
