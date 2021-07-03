#include <stdio.h>
int main()
{
    double n,p,r;
    char ch='%';
    scanf ("%lf",&n);

    if (n<=400.00)
    {
        r=15.0;
    }
    else if (n<=800.00)
    {
        r=12.0;
    }
    else if (n<=1200.00)
    {
        r=10.0;
    }
    else if (n<=2000.00)
    {
        r=7.0;
    }
    else
    {
        r=4.0;
    }

    p=n*r/100.0;

    printf ("Novo salario: %.2lf\n",n+p);
    printf ("Reajuste ganho: %.2lf\n",p);
    printf ("Em percentual: %.0lf %c\n",r,ch);
}
