#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    long long int temp,a,sum,count=0;
    scanf ("%d",&n);

    long long int i;
    for (i=19;count!=n;i++)
    {
        temp = i;
        sum=0;
        while (temp!=0)
        {
            a=temp%10;
            temp=temp/10;
            sum+=a;
        }
        if (sum==10)
            count++;
    }
    printf ("%d",i-1);

}

