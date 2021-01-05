#include <stdio.h>

int main()
{
    int n,c,temp,sum=0,j=1;
    int i,index,count;
    int inp[150000];
    int a2[150000];
    int a3[150000];
    int c1=c;
    scanf ("%d %d",&n,&c);

    for(i=0;i<n;i++)
    {
         scanf ("%d",&inp[i]);
        sum+=inp[i];
        a2[i]=sum;
        if (i>=c)
        {
            a3[j]=a2[i]-a2[i-c];
            j++;
        }
    }
    a3[0]=a2[c-1];

    index=0;
     for(i=1;i<n-c+1;i++)
    {
        if (a3[i]<a3[index])
        index=i;
    }

    printf ("%d\n",index+1);

}
