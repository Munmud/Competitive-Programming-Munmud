#include <stdio.h>
int main ()
{
    char s[100000];
    scanf ("%s",s);
    int a=0,i,n,cnt=0,j,x;
    n=strlen(s);
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
           if (s[i]==s[j])
                {
                    a++;
                    break;
                }
        }
        cnt+=a;
        a=0;
    }
    x=n-cnt;
    if (x%2==0)
        printf ("CHAT WITH HER!");
    else printf ("IGNORE HIM!");
}
