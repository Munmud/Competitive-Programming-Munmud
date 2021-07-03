#include <stdio.h>
int main ()
{
    int b,c;
    long long int s=0;

        scanf ("%d",&b);
        for (c=1;c<=b;c++)
        {
            if (c<10)
            {
                s=s*10+c;
            }
            else if (c<100)
            {
               s=( s*100)+c;
            }


        }
         printf ("%lld\n",s);
}
