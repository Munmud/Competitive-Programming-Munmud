#include <stdio.h>
int main ()
{
    double n,t=1.0,r;
    scanf ("%lf",&n);
if (n>=0.0)
{
    if (n>=0.0 && n<=2000.00)
    {
        t=0.0;
    }
    else if (n>=2000.01 && n<=3000.00)
    {
        n=n-2000.00;
        r=n*.08;
    }
    else if (n>=3000.01 && n<=4500.00)
    {

        n=n-3000.00;
        r=n*.18+80;
    }
    else
    {
        n=n-4500.00;
        r=n*.28+350;
    }

    if (t==0)
    {
        printf ("Isento\n");
    }
    else
        printf ("R$ %.2lf\n",r);
}

return 0;
}
