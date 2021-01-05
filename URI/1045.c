#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,A,B,C,D,l;
    scanf ("%lf %lf %lf",&a,&b,&c);

    if (a>b && a>c)
        d=a;
    else if (b>a && b>c)
        d=b;
    else if (c>b && c>a)
        d=c;
    else d=a;

    if (d==a)
    {
        if (b>c)
            e=b;
        else e=c;
    }
    else if (d==b)
    {
        if (c>a)
            e=c;
        else e=a;
    }
    else if (d==c)
    {
        if (a>b)
            e=a;
        else e=b;
    }
    f=a+b+c-d-e;
    a=d;
    b=e;
    c=f;
    A= a*a;
    B= b*b;
    C=c*c;
    D=B+C;
    l=b+c;

    if ( a>=l ) printf ("NAO FORMA TRIANGULO\n");
    else if ( A==D ) printf ("TRIANGULO RETANGULO\n");
    else if ( A>D ) printf ("TRIANGULO OBTUSANGULO\n");
    else if ( A<D ) printf ("TRIANGULO ACUTANGULO\n");
    if ( a==b && b==c ) printf ("TRIANGULO EQUILATERO\n");
    else if ( a==b || b==c || c==a ) printf ("TRIANGULO ISOSCELES\n");

    return 0;
}
