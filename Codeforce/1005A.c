#include <stdio.h>
int main()
{
    int i,j,cnt=0;
    int h[1001];
    scanf ("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf ("%d",&h[i]);
        if (h[i]==1)
            cnt++;

    }
    h[j]=1;
    printf ("%d\n",cnt);
    for(i=1;i<=j;i++)
    {
        if (h[i]==1)
            printf("%d ",h[i-1]);
    }

}
