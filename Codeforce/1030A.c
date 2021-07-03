#include <stdio.h>
int main()
{
    int k,n,a=0,i;
    scanf ("%d",&k);
    for (i=1;i<=k;i++)
    {
        scanf ("%d",&n);

        if (n!=0)
        a=a+1;
    }

    if (a==0)
        printf ("EASY\n");
    else printf ("HARD\n");
}
