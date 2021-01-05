#include <stdio.h>
#include  <math.h>
int main()
{
    int a,b,c,g1,r;

    scanf("%d %d %d",&a,&b,&c);

    g1 = (a+b+ abs(a-b) )/2;
    r = (g1+c+ abs(g1-c))/2;

    printf ("%d eh o maior\n",r);

    return 0;

}
