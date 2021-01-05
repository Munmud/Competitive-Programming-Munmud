#include <stdio.h>
int main()
{
    int i,j,sum=0,n,mid;
    scanf ("%d",&n);
    mid=(n-1)/2;
    int s[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf ("%d",&s[i][j]);
            if (i==mid || j==mid || i==j || i+j==n-1)
            {
                sum+=s[i][j];
            }
        }
    }
    printf ("%d",sum);
}
