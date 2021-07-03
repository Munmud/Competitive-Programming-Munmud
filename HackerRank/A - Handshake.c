#include <stdio.h>
int main ()
{
    int n;
    int t;
    int temp;

    scanf ("%d",&t);
    while (t--)
    {
         scanf ("%d",&n);
         temp= n*(n-1)/2;
        printf ("%d\n",temp);
    }
}
