#include <stdio.h>
int main()
{
    int n,i,a,b;
    int mod,count=0,temp;
    scanf ("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf ("%d %d",&a,&b);

    mod =a-b;
    if (mod<0)
        mod=-mod;
    while (mod !=0)
    {
        if (mod>=5){
            count+= mod/5;
            mod=mod%5;
        }
        else if (mod>=2){
            count+=mod/2;
            mod=mod%2;
        }
        else{
            mod-=1;
            count++;
        }
    }

    printf ("%d\n",count);
    count =0;
    }
}
