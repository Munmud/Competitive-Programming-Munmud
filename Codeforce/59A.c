#include <stdio.h>
int main()
{
    char s[102];
    scanf ("%s",s);
    int l,i,c1=0,c2=0;
    l=strlen (s);
    for (i=0;i<l;i++)
    {
        if (s[i]>='a' && s[i]<='z')
            c1++;
        else c2++;
    }
    if (c2>c1)
    {
       for (i=0;i<l;i++)
        {
            if (s[i]>='a' && s[i]<='z')
            s[i]-=32;
        }
    }
    else
    {
        for (i=0;i<l;i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        }
    }
    printf ("%s",s);
}
