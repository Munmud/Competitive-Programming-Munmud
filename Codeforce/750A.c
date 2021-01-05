#include <stdio.h>
int main()
{
    int temp=0,n,k,i;
    scanf("%d %d",&n,&k);
    temp+=k;
    for(i=1;i<=n;i++)
    {
        temp+=i*5;
        if (temp>240)
            break;
    }
    printf ("%d",i-1);
}
