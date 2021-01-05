#include <stdio.h>
int main ()
{
    int i,j,a,b,c,t=0;
    long long s=0;
    scanf ("%d",&j);
    for (i=1; i<=j; i++){
        scanf ("%d %d",&a,&b);
        for (c=1;c<=b;c++)
        {
            if (c<10)
            {   s= s*10 + c;
                if (c>=a)
                {
                    if (s%3==0)
                        t=t+1;
                }
            }
            else if (c<100)
            {
                s= s*100 + c;
                if (c>=a)
                {

                    if (s%3==0)
                        t=t+1;
                }
            }
            else if (c<1000)
            {
                s= s*1000 + c;
                if (c>=a)
                {

                    if (s%3==0)
                        t=t+1;
                }
            }


        }
        printf ("%lld\n",s);
        printf ("Case %d: %d\n",i,t);
        s=0;
        t=0;
    }

}
