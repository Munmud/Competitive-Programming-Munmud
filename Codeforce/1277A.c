#include <stdio.h>
int main ()
{
    long long int t,n,a[10],temp,ans,i;
    scanf ("%lld",&t);
    while (t--)
    {
        for (i=1;i<10;i++)
            a[i-1]=i;
        ans=0;
        temp=0;
        scanf ("%lld",&n);
        if (n<10)
            printf ("%lld\n",n);
        else if (n==10)
            printf ("%lld\n",n-1);
        else{
          while (temp<n)
        {
              for (i=0;i<9;i++)
            {
                temp=a[i]*10+i+1;
                if (temp<=n)
                    ans++;
                else break;
                a[i]=temp;
            }
        }

        printf ("%lld\n",ans+9);
        }

    }
}
