#include <stdio.h>
int main()
{
    int i,j,k,min,temp,cnt=0;
    int h[100];

    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d",&h[i]);
    }

    for (i=0;i<j-1;i++)
    {
        min=i;
        for(k=i+1;k<j;k++)
        {
            if (h[k]<h[min])
                min=k;
        }

        if (min!=i)
        {
            temp=h[i];
            h[i]=h[min];
            h[min]=temp;
        }
    }

    for(i=0;i<j;i+=2)
    {

        if (h[i]<h[i+1])
        cnt+=h[i+1]-h[i];
    }
    printf ("%d",cnt);
}
