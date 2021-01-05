#include <stdio.h>
int main()
{
    int n,c=1;
    scanf ("%d",&n);
    printf ("I hate");
    while (c<n)
    {
        c++;
        if (n==1)
            break;
        else if (c%2==0)
            printf (" that I love");
        else
            printf (" that I hate");
    }
    printf (" it");
}
