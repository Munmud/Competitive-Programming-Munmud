#include <stdio.h>
int main()
{
    int s[51],cnt=0;
    int n,k,temp,i;
    scanf ("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf ("%d",&s[i]);
    temp=s[k-1];
    for (i=0;i<n;i++)
        {if(s[i]>=temp && s[i])
            cnt++;}
    printf ("%d",cnt);
}
