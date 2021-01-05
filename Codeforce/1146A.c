#include <stdio.h>
int main()
{
    char s[51],ch;
    int i=0,a=0,b=0,len;
    scanf ("%s",&s);
    len=strlen(s);
    while ( i<len )
    {
        if ( s[i]=='a')
            a++;
        else b++;
        i++;
    }
    while (a<b || a==b)
    {
        b-=1;
    }
    printf ("%d\n",a+b);
}
