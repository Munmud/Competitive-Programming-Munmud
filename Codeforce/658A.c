#include <stdio.h>
int main()
{
    int n,c,i,cnt1=0,cnt2=0,time=0,cnt;

    scanf ("%d %d",&n,&c);
    int p[n],t[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&p[i]);
    }
    for (i=0;i<n;i++)
    {
        scanf ("%d",&t[i]);
    }
    for (i=0;i<n;i++)
    {
        time+=t[i];
        cnt=p[i]-time*c;
        if (cnt>0)
        cnt1+=cnt;
    }
    time=0;
    for (i=n-1;i>-1;i--)
    {
        time+=t[i];
        cnt=p[i]-time*c;
        if (cnt>0)
        cnt2+=cnt;
    }
   if (cnt1==cnt2)
    printf("Tie\n");
   else if (cnt1>cnt2)
    printf("Limak\n");
    else if (cnt1<cnt2)
    printf("Radewoosh\n");
}
