#include <stdio.h>
int main ()
{
    int n,y,m,d,v;
    scanf("%d",&n);
    y=n/365;
    v=n%365;
    m=v/30;
    d=v%30;

    printf ("%d ano(s)\n",y);
    printf ("%d mes(es)\n",m);
    printf ("%d dia(s)\n",d);

    return 0;
}
