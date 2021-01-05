#include <stdio.h>
int main ()
{
    int i,j,a;
    scanf("%d",&j);
    int b[j];
    for (i=1;i<=j;i++)
    {
        scanf ("%d",&a);
        b[a] = i;
    }
    for (i=1;i<=j;i++)
    {
        printf ("%d ",b[i]);
    }
}
