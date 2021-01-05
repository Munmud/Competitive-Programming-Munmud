#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,t,a=1;

    scanf ("%d",&j);
    char s[j][102];
    for (i=0;i<j;i++)
    {
        scanf ("%s",s[i]);
        for (t=0;t<i;t++)
            {
                a=strcmp(s[i],s[t]);
                if (a==0)
                break;
            }
        if (a==0)
            printf ("YES\n");
        else printf ("NO\n");
        a=1;
    }
}
