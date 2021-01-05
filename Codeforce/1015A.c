#include <stdio.h>
int main()
{
    int h[101],c[101];
    int i,j,t,a,b,cnt=0;
    scanf ("%d %d",&j,&t);
    for (i=0;i<=101;i++)
    {
        h[i]=0;
        c[i]=0;
    }
    for (i=0;i<j;i++)
    {
        scanf ("%d %d",&a,&b);
        while (a<b || a==b)
        {
            h[a]=1;
            a++;
        }
    }
    for(i=1;i<=t;i++)
    {
        if (h[i]!=1)
        {
            c[cnt]=i;
            cnt++;
        }
    }
    printf ("%d\n",cnt);
    for(i=0;i<cnt;i++)
        {
            printf ("%d ",c[i]);
        }
}
