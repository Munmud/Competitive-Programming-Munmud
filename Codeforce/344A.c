#include <stdio.h>
int main()
{
    int a,b=3,i,j,cnt=0;
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%d",&a);
        if (a!=b)
            cnt++;
        b=a;
    }
    printf ("%d",cnt);
}
