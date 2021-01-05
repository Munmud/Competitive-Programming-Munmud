#include <stdio.h>

int main()

{
    int code1,q1,code2,q2;
    double price1,price2,total;;

    scanf ("%d %d %lf",&code1,&q1,&price1);
    scanf ("%d %d %lf",&code2,&q2,&price2);

    price1 = price1 *q1;
    price2 = price2 *q2;
    total = price1 + price2;

    printf ("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}
