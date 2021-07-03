#include <stdio.h>
int main()
{
    int n,t,cnt=0;
    char s[5];
    scanf ("%d",&n);
    for(t=0;t<n;t++)
    {
        scanf("%s",s);
        if(s[1]=='+')
            ++cnt;
        else
            --cnt;
    }
    printf ("%d",cnt);
}
