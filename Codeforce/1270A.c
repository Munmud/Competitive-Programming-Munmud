#include <stdio.h>
int main ()
{
    int test_case,n,k1,k2,i,temp,y=0;
    scanf ("%d",&test_case);
    while (test_case--)
    {
        scanf ("%d %d %d",&n,&k1,&k2);
        for (i=0;i<k1;i++)
        { scanf ("%d",&temp);
            if (temp==n)
                y=1;
        }
        for (i=0;i<k2;i++)
        { scanf ("%d",&temp);
        }
        if (y)
            printf ("YES\n");
        else printf ("NO\n");
        y=0;
    }
}
