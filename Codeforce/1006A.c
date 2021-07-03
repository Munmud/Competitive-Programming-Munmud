#include <stdio.h>
int main()
{
    int i,j;
    int h[1000];
    scanf("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d",&h[i]);

        if (h[i]%2==0)
        h[i]-=1;
    }
    for (i=0;i<j;i++)
    {
        printf ("%d ",h[i]);

    }
}
