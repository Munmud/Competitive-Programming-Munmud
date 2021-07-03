#include <stdio.h>
int compositeCheck(int n)
{
    int i,t;
    t=0;
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            t=1;
            break;
        }
    }
    return t;
}
int main()
{
    int n,a,b,temp,ac,bc,i;
    scanf ("%d",&n);
    for(i=4;i<n;i++)
    {

            a=i;
            b=n-i;
            ac= compositeCheck(a);
            bc= compositeCheck(b);
            if (ac==1 && bc==1)
                break;

    }
    printf ("%d %d\n",a,b);

}
