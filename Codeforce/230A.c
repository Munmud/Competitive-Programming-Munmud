#include <stdio.h>
int x[1000],y[1000];
int sortMe(int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (x[j]<x[min])
                min=j;
        }
        if (min!=i)
        {
            temp=x[i];
            x[i]=x[min];
            x[min]=temp;

            temp=y[i];
            y[i]=y[min];
            y[min]=temp;
        }
    }
}
int main()
{
    int i,s,n,tru=1;
    scanf ("%d %d",&s,&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d %d",&x[i],&y[i]);
    }
    sortMe(n);

    for (i=0;i<n;i++)
    {
        if (s>x[i])
            s+=y[i];
        else
        {
            tru=0;
        }
    }

    if (tru)
        printf("YES");
    else printf("NO");
}
