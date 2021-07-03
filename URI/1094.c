#include <stdio.h>
int main ()
{
    int i,j,n,f=0,r=0,b=0,s=0;
    double x,y,z;
    char a,l='%';
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%d %c",&n,&a);
        if (a=='C')
        {
            s=s+n;
            b=b+n;
        }
        if (a=='R')
        {
            s=s+n;
            r=r+n;
        }
        if (a=='S')
        {
            s=s+n;
            f=f+n;
        }
    }
    x=b*100.0/s;
    y=r*100.0/s;
    z=f*100.0/s;
    printf ("Total: %d cobaias\n",s);
    printf ("Total de coelhos: %d\n",b);
    printf ("Total de ratos: %d\n",r);
    printf ("Total de sapos: %d\n",f);
    printf ("Percentual de coelhos: %.2lf %c\n",x,l);
    printf ("Percentual de ratos: %.2lf %c\n",y,l);
    printf ("Percentual de sapos: %.2lf %c\n",z,l);

}
