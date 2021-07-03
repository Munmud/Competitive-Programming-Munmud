#include <stdio.h>
int main ()
{
    int n,i,j,z_count=0,index_count=0;
    int a[20001],z[20001],b[20001],index[20001];
    scanf ("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
        if (a[i]==0)
        {
            z[z_count]=i+1;
            z_count++;
        }
        else
        {
            b[ a[i] ]=1;
            //printf ("%d ",b[a[i]]);
        }
    }
    for (i=1;i<=n;i++)

        {
            if(b[i]!=1)
            {
                index[index_count]=i;
                index_count++;
            }
        }



}
