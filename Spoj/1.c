
#include <stdio.h>
int main()
{
    int n,cnt=0,i;
    int s[100000];
    while (scanf ("%d",&n)!=EOF)
    {
        if (n==42)
            break;
        if (n/100==0)
            {s[cnt]=n;
            cnt++;}
    }
    for (i=0;i<cnt;i++)
        printf ("%d\n",s[i]);

    return 0;
}
