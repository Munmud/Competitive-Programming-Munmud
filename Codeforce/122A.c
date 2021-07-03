#include <stdio.h>
int main()
{
    int n;
    int cnt=0,i,x,temp;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        temp=i;
        while (temp!=0)
        {
            x=temp%10;
            if (x==4 || x== 7){}
            else break;
            temp=temp/10;
            if (temp==0)
            {
                if  (n%i==0)
                    cnt++;
            }
        }
        if (cnt==1)
        {
            break;
        }
    }

    if (cnt==1)
        printf ("YES");
    else printf ("NO");
}
