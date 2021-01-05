#include <stdio.h>
int main ()
{
    int i ,j,k=7,s=2,p=5;
    for (i=1;i<=9;i=i+2)
    {
            while (k<=15)
            {
                while (k>=p)
                {
                printf ("I=%d J=%d\n",i,k);
                k-=1;
                }
                k=7+s;
                s=s+2;
                p=p+2;
                break;
            }

    }
}
