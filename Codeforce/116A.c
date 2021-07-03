#include <stdio.h>
int main()
{
    int i,j,a,b,temp=0,cnt=0;
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d %d",&a,&b);
        temp+=0-a+b;
        if (temp>cnt)
            cnt=temp;
    }
    printf ("%d",cnt);
}
