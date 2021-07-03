#include <stdio.h>
int main()
{
    int i,j,k,temp,a=1,cnt,b=0;
    int h[100];
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d",&h[i]);
    }
    for (i=0;i<j;i++)
    {
        temp=h[i];
        h[i]=0;
        for (k=0;k<j;k++)
        {
            if (temp==h[k])
                a++;
        }
        h[i]=temp;
        if (a>b)
            b=a;
        a=1;
    }

    printf("%d",b);
}
