#include <stdio.h>
#include <string.h>
int  main()
{
    int n,k,l=0,r=0,i;
    scanf ("%d",&n);
    char s[100000];
    scanf ("%s",s);

    k=strlen(s);
    for( i=0;i<k;i++)
    {
        if (s[i]=='L')
            l++;
        else r++;
    }
    printf ("%d",l+r+1);
}
