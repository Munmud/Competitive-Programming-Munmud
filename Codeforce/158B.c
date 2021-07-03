#include <stdio.h>
int main()
{
    int n,x,i,temp=0;
    int s[6]={0,0,0,0,0};

    scanf ("%d",&n);

    for (i=0;i<n;i++)
        {
            scanf ("%d",&x);
            s[x]+=1;
        }
    int cnt=0;
    cnt+=s[4];
    if (s[3]>=s[1])
    {
        cnt+=s[1];
        cnt+=s[3]-s[1];
        s[1]=0;
    }
    else
    {
        cnt+=s[3];
       s[1]=s[1]-s[3];
    }
    while (s[2]>1)
        {
            cnt++;
            s[2]-=2;
        }
    if (s[2]==1)
            {
                temp+=2;
                s[2]=0;
            }
    while (s[1])
    {
        while (temp!=4 && s[1]>0)
        {
            temp+=1;
            s[1]-=1;
        }

        if (temp==4)
        {
            cnt++;
            temp=0;
        }
    }
    if (temp>0)
        cnt++;

    printf ("%d",cnt);

}
