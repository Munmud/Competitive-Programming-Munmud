#include <stdio.h>
int a[100000];
int check(int i,int s,int t)
{
    int a=0,temp=0,j,ans=0,temp2;
    for(j=0;temp<t;j++)
    {
        if (j!=i)
        {
            temp2=temp+a[j];
            if (temp2<=s)
            {
             temp+=a[j];
             ans++;
            }
            else break;
        }
        return ans;

    }
}
int main()
{
    int ti,s,t,i,temp,ans=0;

    scanf ("%d",&ti);
    while (ti--)
    {
        scanf ("%d %d",t,s);
        for (i=0;i<t;i++)
            scanf ("%d",&a[i]);
        for(i=-1;i<t;i++)
        {temp=check(i,s,t);
        if (ans<temp)
            ans=temp
        }
        printf ("%d",ans);
    }
}
