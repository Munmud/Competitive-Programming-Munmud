#include <stdio.h>
int main()
{
    char s[101],h[101];
    scanf (" %s",s);
    scanf (" %s",h);
    int i,l,a=0,b=0;
    l=strlen(s);
    for (i=0;i<l;i++)
    {
        if (s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        if (h[i]>='A' && h[i]<='Z')
            h[i]+=32;
        a+=s[i];
        b+=h[i];
        if (a!=b)
            break;
    }
    if (a<b)
        printf ("-1");
    else if (a>b)
        printf ("1");
    else printf ("0");
}
