#include <stdio.h>
int main()
{
    int i,j,k,min,temp,mid;
    int s[1000];
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d",&s[i]);
    }

    for(i=0;i<k-1;i++)
    {
        min=i;
        for (k=i+1;k<j;k++)
        {
            if (s[k]<s[min])
                min=k;
        }
        if (min!=i)
        {
            temp=s[i];
            s[i]=s[min];
            s[min]=temp;
        }
    }


   if (j%2==0)
        mid=j/2-1;
    else mid =(j+1)/2-1;
    printf ("%d",s[mid]);
}
