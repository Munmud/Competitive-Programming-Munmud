#include <stdio.h>
int main()
{
    int i,j,cnt=0;
    char s[65000];
    scanf("%d",&j);
    scanf ("%s",s);
    for (i=0;i<j;i++)
    {
        if  (s[i]%2==0)
            cnt+=i+1;
    }

    printf ("%d",cnt);
}
