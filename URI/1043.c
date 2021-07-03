#include <stdio.h>
int main()
{
    double a,b,c,s;
    scanf ("%lf %lf %lf",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b)
    {
        s = a+b+c;
        printf ("Perimetro = %.1lf\n",s);
    }
    else
    {
        s=(a+b)/2.0*c;
        printf ("Area = %.1lf\n",s);
    }
    return 0;
}
