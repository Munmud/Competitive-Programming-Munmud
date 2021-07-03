#include <stdio.h>
int main ()
{
    int i,j;
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        if (i%2!=0)
            printf ("%d\n",i);
    }
}
