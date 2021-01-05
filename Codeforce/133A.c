#include <stdio.h>
int main()
{
    char s[105];
    scanf ("%s",s);
    int i,l=strlen(s),cnt=0;
    for (i=0;i<l;i++)
    {
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9')
            cnt=1;
    }
    if (cnt)
        printf ("YES\n");
    else printf ("NO");
}
