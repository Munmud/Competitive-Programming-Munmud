#include <stdio.h>
int main()
{
    int i,j,c1=0,c2=0;
    char s[101];
    scanf ("%d",&j);
    scanf ("%s",&s);
    for (i=0;i<j;i++)
    {
        if (s[i]=='F' && s[i+1]=='S')
            c1++;
        else if (s[i]=='S' && s[i+1]=='F')
            c2++;
    }

    if (c2>c1)
        printf ("YES");
    else printf ("NO");
}

