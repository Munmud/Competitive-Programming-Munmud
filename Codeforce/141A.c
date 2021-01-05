#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],x[100],y[100];
    int a[150],b[150];
    int i,temp,t=0;
    int n;

    for (i=65;i<123;i++)
    {
        a[i]=0;
        b[i]=0;
    }

    scanf ("%s",s);
    n=strlen(s);
    for (i=0;i<n;i++)
    {
        temp=s[i];
        a[temp]++;
    }

    scanf ("%s",x);
    n=strlen(x);
    for (i=0;i<n;i++)
    {
        temp=x[i];
        a[temp]++;
    }

    scanf ("%s",y);
    n=strlen(y);
    for (i=0;i<n;i++)
    {
        temp=y[i];
        b[temp]++;
    }

    for (i=65;i<123;i++)
    {
        if (a[i]!=b[i])
        {
            t=1;
            break;
        }
    }

    if (t==1)
        printf ("NO\n");
    else printf ("YES\n");
}
