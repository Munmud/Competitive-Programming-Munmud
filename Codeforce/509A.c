#include <stdio.h>
int main ()
{
    int n,i,j;
    scanf ("%d",&n);
    int a[10]={1,1,1,1,1,1,1,1,1,1};
    int b[10]={1,1,1,1,1,1,1,1,1,1};

    for (j=1;j<n;j++)
    {
        for (i=1;i<=n-1;i++)
        {
            b[i]=a[i]+b[i-1];
        }
        for (i=1;i<=n-1;i++)
        {
            a[i]=b[i];
        }
    }

    printf ("%d",b[n-1]);
}
