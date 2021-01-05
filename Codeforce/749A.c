#include <stdio.h>
int main ()
{
    int n,a=0,b=0,i;
    scanf ("%d",&n);
    int s=n;
    while (s%2!=0)
    {
        s-=3;
        b++;
    }
    a=s/2;
    printf ("%d\n",a+b);
    for (i=1;i<=a;i++)
        printf ("2 ");
    for (i=1;i<=b;i++)
        printf ("3 ");

}
