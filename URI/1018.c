#include <stdio.h>
int main ()
{
    int n,a,b,c,d,e,f,g,value;
    scanf ("%d",&n);

    a= n/100;
    value =n%100;
    b=value/50;
    value = value%50;
    c=value/20;
    value = value%20;
    d=value/10;
    value = value%10;
    e=value/5;
    value = value%5;
    f=value/2;
    g = value%2;
    printf ("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;
}
