#include <stdio.h>
#include <stdlib.h>
int amne(int a, int b)
{
    int temp;
    temp=a-b;
    if (temp<0)
        temp=-temp;
    return temp;
}

int main ()
{
    int n,a,b,c,ans,temp;
    scanf ("%d",&n);
    while (n--)
    {
        scanf ("%d %d %d",&a,&b,&c);
        ans=0;
        ans+=amne(a,b);
        ans+=amne(b,c);
        ans+=amne(c,a);

        ans-=4;
        if (ans<0)
            ans=0;

        printf ("%d\n",ans);
    }
}
