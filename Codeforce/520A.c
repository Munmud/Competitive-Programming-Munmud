#include <stdio.h>
int main ()
{
    int n,i,c,a[123],j,count=1;
    char s[101];

    scanf ("%d",&n);
    scanf ("%s",&s);

    for (i=65;i<123;i++)
        a[i]=0;

    for (i=0;i<n;i++)
    {
        c=s[i];
        a[c]++;
    }
    for (i=65;i<91;i++)
        {
            if (a[i]>0 || a[i+32]>0)
                count=1;
            else {
                count=0;
                break;
            }
        }
    if (count)
        printf ("YES");
    else printf ("NO");
}
