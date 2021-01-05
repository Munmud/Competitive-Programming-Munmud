#include <stdio.h>
int main ()
{
    int i,j,e=0,o=0,p=0,n=0,x;
    for (i=0;i<5;i++)
    {
        scanf ("%d",&x);
        if (x%2==0)
            e=e+1;
        else o=o+1;
        if (x>0)
            p=p+1;
        else if (x<0) n=n+1;
    }
    printf ("%d valor(es) par(es)\n",e);
    printf ("%d valor(es) impar(es)\n",o);
    printf ("%d valor(es) positivo(s)\n",p);
    printf ("%d valor(es) negativo(s)\n",n);
}
