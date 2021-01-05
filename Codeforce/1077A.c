#include <stdio.h>
int main()
{
    int i,j,k;
    long long int sum=0;
    long long int r,l,t;
    scanf("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf("%lld %lld %lld",&r,&l,&t);

            if (t%2==0)
                sum=(r-l)*t/2;
            else
                sum=((t+1)/2*r)-((t-1)/2*l);


        printf ("%I64d\n",sum);
        sum=0;
    }
}
