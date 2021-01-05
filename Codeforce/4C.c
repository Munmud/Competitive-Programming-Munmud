#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,s=0;
    scanf ("%d",&n);

    char a[10000][33],b[33];
    int c[10000];

    while (n--)
    {
        scanf ("%s",&b);
        for (i=0;i<s;i++)
        {
            if (strcmp(a[i],b)==0)
                break;
        }
        if (i==s)
        {
            printf ("OK\n");
            strcpy(a[s],b);
            s++;
        }
        else
        {
            c[i]++;
            printf ("%s%d\n",b,c[i]);
        }
    }
}
