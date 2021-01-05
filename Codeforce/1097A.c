#include <stdio.h>
int main ()
{
    int n,k=0;
    char t[2];
    char h[16];
    scanf ("%s",&t);
    for (n=0;n<5;n++)
    {
        scanf ("%s",&h);
        if ( h[0]==t[0] || h[1]==t[1] )
        k=1;

    }
    if (k==1)
        printf ("YES");
    else
        printf ("NO");
}
