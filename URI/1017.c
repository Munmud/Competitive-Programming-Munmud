#include <stdio.h>

int main()
{
    int a,b;
    float lit;
    scanf ("%d",&a);
    scanf ("%d",&b);

    lit = ((double)b*a)/12;

    printf ("%.3lf\n",lit);

    return 0;
}
