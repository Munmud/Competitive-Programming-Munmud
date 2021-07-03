#include <stdio.h>
#include <math.h>
int main ()
{
    int m[6][6];
    int i,j,x,y,s;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            scanf ("%d",&m[i][j]);
            if (m[i][j]==1)
            {
                x=i;
                y=j;
            }

        }
    }

    s=abs(3-x)+abs(3-y);
    printf ("%d",s);

}
