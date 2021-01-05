#include <stdio.h>

int main()
{
    double a,b,c,d,e,f;
    scanf ("%lf %lf %lf",&a,&b,&c);
    d= b*b - 4.0*a*c;
    if (a>0 && d>=0)
    {
        e = (-b + sqrt(d))/2.0/a;
        f = (-b - sqrt(d))/2.0/a;

        printf ("R1 = %.5lf\n",e);
        printf ("R2 = %.5lf\n",f);
    }
    else
        printf ("Impossivel calcular\n");

    return 0;
}
