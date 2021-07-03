#include <stdio.h>
int main ()
{
    int n,i,x=0,temp=0,ans=0;
    scanf ("%d",&n);
    while (n--){
        scanf ("%d",&i);
        if (x<=i)
        temp++;
        else temp=1;
        x=i;
        if (temp>ans)
            ans=temp;
    }
    printf ("%d",ans);
}
