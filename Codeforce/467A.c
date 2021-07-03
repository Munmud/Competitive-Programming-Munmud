#include <stdio.h>
int main()
{
    int i,j,a,b,sum=0,temp;
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d %d",&a,&b);
        temp=b-a;
        if (temp>1)
            sum++;
    }
    printf ("%d",sum);
}
