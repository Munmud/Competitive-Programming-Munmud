#include <stdio.h>
int main()
{
    int n,i,cnt=0,temp=0;
    char s[52];
    scanf ("%d",&n);
    scanf ("%s",s);
    for (i=1;i<n;i++)
    {
        if (s[i]==s[i-1])
            temp++;
        else
        {
            cnt+=temp;
            temp=0;
        }
    }
    if (temp!=0)
            cnt+=temp;
    printf ("%d",cnt);
}
