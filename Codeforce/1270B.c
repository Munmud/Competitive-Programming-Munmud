#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int check(int n,int a,int b)
{
    //printf ("%d %d %d",n,a,b);
    int temp=abs(a-b);
       // printf (" %d\n",temp);
    if (temp>=n)
        return 1;
    else return 0;
}
int main()
{
    int test_case,n,a[200001],i,j,number,c=0;
    scanf ("%d",&test_case);
    while(test_case--)
    {
        scanf ("%d",&n);
        for (i=0;i<n;i++)
        {
            scanf ("%d",&a[i]);
        }
        for (i=0;i<n-1;i++)
        {
            for(j=n-1;j>i;j--)
            {
                number=j-i+1;
                c=check(number,a[i],a[j]);

                if (c==1)
                    break;
            }
            if (c==1)
                break;
        }

        if (c==1)
        {
            printf ("YES\n");
            printf ("%d %d\n",i+1,j+1);
        }
        else printf ("NO\n");
        c=0;

    }
}
