#include <stdio.h>
int main()
{
    int i,a,j,n,sum,r;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf("%d",&n);
        a=n;
        sum=0;
        while (n>0)
        {
            r=n%10;
            sum = sum *10 +r;
            n=n/10;
        }
        if (sum == a)
            printf ("Case %d: Yes\n",i);
        else
            printf ("Case %d: No\n",i);
    }

}
