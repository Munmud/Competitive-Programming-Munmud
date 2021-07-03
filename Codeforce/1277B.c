#include <stdio.h>
int sortMe(int s[5],int n)
{
    int i,j,min,temp;
    for (i=0;i<n-1;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if (s[j]>s[min])
                min=j;
        }
        if (min!=i)
        {
            temp=s[i];
            s[i]=s[min];
            s[min]=temp;
        }
    }
    return s;
}
int main ()
{
    int n,s[200000],temp,count=0,t;
    scanf ("%d",&t);
    while(t--)
    {
        count=0;
        scanf ("%d",&n);

    for (int i=0;i<n;i++)
        scanf ("%d",&s[i]);
    sortMe(s,n);

    for (int i=0;i<n;i++)
    {
        while (s[i]%2==0)
        {
            temp=s[i];
            count++;
            for(int j=i;j<n;j++)
            {
                if (s[j]==temp)
                {
                    s[j]=s[j]/2;
                }

                else break;
            }
        }
    }
    printf ("%d\n",count);
    }


}
