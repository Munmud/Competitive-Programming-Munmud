#include <stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    n-=2;
    if (n%2==0 && n!=0 && n>0)
        printf ("YES");
    else printf ("NO");
}
