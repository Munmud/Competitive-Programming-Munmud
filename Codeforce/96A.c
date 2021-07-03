#include <stdio.h>
int main()
{
    char s[101];
    scanf ("%s",s);
    int l,i,temp=0,sum=0;
    l=strlen(s);
    for (i=1;i<l;i++)
    {
        if(s[i]==s[i-1])
            temp++;
        else temp=0;
        if (temp>5)
        {
            sum=1;
            break;
        }
    }
    if (sum==1)
        printf ("YES");
    else printf ("NO");

}
