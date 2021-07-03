#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f;
    scanf ("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
        d=a;
    else if (b>a && b>c)
        d=b;
    else d=c;

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
    else
    {
        if (a>b)
            e=a;
        else e=b;
    }
    f = a+b+c-d-e;

    printf ("%d\n",f);
    printf ("%d\n",e);
    printf ("%d\n",d);
    printf ("\n");
    printf ("%d\n",a);
    printf ("%d\n",b);
    printf ("%d\n",c);
}
