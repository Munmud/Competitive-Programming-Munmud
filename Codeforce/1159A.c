#include <stdio.h>
int main ()
{
    int i,j,n,sum=0;
    char s[102];
    scanf ("%d",&n);
    scanf ("%s",s);

    for (i=0;i<n;i++)
    {
        if (s[i]=='-')
            sum--;
        else if (s[i]=='+')
            sum++;
        if (sum==-1)
            sum=0;
    }
    printf ("%d",sum);
}
