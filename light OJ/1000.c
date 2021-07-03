#include <stdio.h>
int main()
{
    int i,j,a,b,s;
    scanf ("%d",&i);
    for (j=1;j<=i;j++)
    {
        scanf ("%d %d",&a,&b);
        s = a + b;
        printf ("Case %d: %d\n",j,s);
    }

    return 0;
}
