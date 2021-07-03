#include <stdio.h>
int main ()
{
    int i,j;
    double a,b,c,s;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%lf %lf %lf",&a,&b,&c);
        a=a*2.0;
        b=b*3.0;
        c=c*5.0;
        s=(a+b+c)/10;
        printf ("%.1lf\n",s);
    }
}
