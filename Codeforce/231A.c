#include <stdio.h>
int main()
{
    int i,j,a,b,c,cnt=0,temp;
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d %d %d",&a,&b,&c);
        temp=a+b+c;
        if (temp>1)
            cnt++;
    }
    printf ("%d",cnt);
}
