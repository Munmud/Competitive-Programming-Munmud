#include <stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf ("%d",&n);
    while (n++){
        a=n%10;
        b=(n/10)%10;
        c=(n/100)%10;
        d=(n/1000)%10;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    printf ("%d",n);
}
