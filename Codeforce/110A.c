#include<stdio.h>
int main()
{
    int temp,cnt=0;
    long long int n;
    scanf ("%I64d",&n);
    while (n!=0)
    {
        temp=n%10;
        if (temp==4 || temp==7)
            {
                cnt++;
            }
        n=n/10;
    }

    if (cnt==4 || cnt==7)
        printf ("YES");
    else printf ("NO");

}
