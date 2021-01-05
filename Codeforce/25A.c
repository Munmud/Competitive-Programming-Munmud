#include <stdio.h>
int main()
{
    int n,even=0,odd=0,ans;
    scanf ("%d",&n);

    int a[n],i;
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);

    for (i=0;i<3;i++)
    {
        if (a[i]%2==0)
            even++;
        else odd++;
    }
    if (even>odd)
    {
        for (i=0;i<n;i++)
        {
            if (a[i]%2!=0)
            {   ans=i+1;
                break;
            }
        }
    }
    else
    {
        for (i=0;i<n;i++)
        {
            if (a[i]%2==0)
            {
                ans=i+1;
                break;
            }
        }
    }

    printf ("%d\n",ans);
}
