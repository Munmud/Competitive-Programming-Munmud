#include <stdio.h>
int main()
{
    double a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;

    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%lf",&c);

    TRIANGULO = (a*c)/2;
    CIRCULO = 3.14159 * c*c;
    TRAPEZIO = (a+b)/2*c;
    QUADRADO = b*b;
    RETANGULO = a*b;

    printf ("TRIANGULO: %.3lf\n",TRIANGULO);
    printf ("CIRCULO: %.3lf\n",CIRCULO);
    printf ("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf ("QUADRADO: %.3lf\n",QUADRADO);
    printf ("RETANGULO: %.3lf\n",RETANGULO);

    return 0;
}
