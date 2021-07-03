#include <stdio.h>
int main()
{
    char s[100];
    int i,x;
    scanf("%s",s);
    x=strlen(s);
    for (i=0;i<x;i++)
    {
        if (s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y')
            {
                if (s[i]>='a' && s[i]<='z')
                printf (".%c",s[i]);
                else printf (".%c",s[i]+32);
            }
    }
}
