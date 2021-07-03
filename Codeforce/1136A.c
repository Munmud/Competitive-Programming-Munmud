#include <stdio.h>
int main()
{
    int i,j,a,b,t,cnt=0;
    int h[101];
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d %d",&a,&h[i]);
    }
    scanf ("%d",&t);

    for (i=0;i<j;i++)
    {
        if (t<h[i] || t==h[i])
            {
                cnt++;
            }
    }
    printf ("%d",cnt);
}
