#include <stdio.h>
#include <string.h>
int main()
{
    char a[101],b[101];
    scanf ("%s",a);
    scanf ("%s",b);

    int n,i;
    n=strlen(a);

    for (i=0;i<n;i++)
    {
        if (a[i]==b[i])
            printf ("0");
        else printf ("1");
    }
}
