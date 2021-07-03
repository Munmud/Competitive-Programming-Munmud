#include <stdio.h>
int main()
{
    int n,i,cnt=0,mid;
    int s[100000];

    scanf ("%d",&n);
    for (i=0;i<n;i++)
    scanf ("%d",&s[i]);



    if (n%2==0)
    {
        mid=n/2;
        for (i=0;i<mid;i++)
        {
            if (s[i]!=s[n-1-i])
                cnt++;
            if (i!=0){
                {if (s[i]==(s[i-1]+1))
                    cnt++;
                }
            }
        }
    }
    else {
            mid =(n-1)/2;
        for (i=0;i<=mid;i++)
        {
            if (s[i]!=s[n-1-i])
                cnt++;
            if (i!=0){
                if (s[i]==s[i-1]+1)
                    cnt++;
            }
        }
    }
    printf ("%d",cnt);


}
