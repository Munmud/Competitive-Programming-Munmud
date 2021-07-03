#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,tru=1;
    scanf ("%d",&n);

    int s[n],temp;
    int a,b,i;

    for (i=0;i<n;i++)
        s[i]=0;
    scanf ("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&temp);
        s[temp-1]++;
    }

    scanf ("%d",&b);
    for (i=0;i<b;i++)
    {
        scanf("%d",&temp);
        s[temp-1]++;
    }
    for (i=0;i<n;i++)
    {
        if(s[i]==0)
        {
            tru=0;
            break;
        }
    }
    if (tru)
        printf ("I become the guy.\n");
    else printf("Oh, my keyboard!\n");

}
