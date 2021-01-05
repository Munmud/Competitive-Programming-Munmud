#include <stdio.h>
int mx,my,mz;
int sortMe(int *s,int n)
{
    int i,j,min,temp;
    for (i=0;i<n-1;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if (s[j]<s[min])
                min=j;
        }
        if (min!=i)
        {
            temp=s[i];
            s[i]=s[min];
            s[min]=temp;
        }
    }
}

int main()
{
    int n,i,count=0,s[5],ans=0,j,k,temp,tn;

    scanf ("%d",&n);
    for(i=0;i<3;i++)
        scanf("%d",&s[i]);

        sortMe(s,3);

    mx=n/s[0];
    my=n/s[1];
    mz=n/s[2];

    for (i=0;i<=mz;i++)
    {   tn=n;
        for (j=0;j<=my;j++)
        {
            k=(tn-(s[2]*i+s[1]*j))/s[0];


                temp=s[0]*k+s[1]*j+s[2]*i;
                if (temp==n)
                {
                    if (ans<(i+j+k))
                        ans=i+j+k;
                }

        }
    }

    printf ("%d",ans);

}
