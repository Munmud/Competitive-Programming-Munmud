#include <stdio.h>
int main ()
{
    int a,b,i,j;
    scanf ("%d %d",&a,&b);

    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            if (i%4==1 || i%4==3)
            {
                printf ("#");
            }
            if (i%4==2)
            {
                if (j==b)
                printf ("#");
                else printf(".");
            }
            if (i%4==0)
            {
                if (j==1)
                printf ("#");
                else printf(".");
            }
            if (j==b)
                printf ("\n");
        }
    }
}
