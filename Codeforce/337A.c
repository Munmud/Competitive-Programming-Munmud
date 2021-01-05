#include <stdio.h>
int main()
{

    int n,m,ans=999999;
    int i;
    int puzz[60];
    int temp,j,min;

    scanf ("%d %d",&n,&m);

    for (i=0;i<m;i++)
    {
        scanf ("%d",&puzz[i]);
    }

    for (i=0;i<m-1;i++)
    {
        min=i;
        for (j=i+1;j<m;j++)
        {
            if (puzz[j]<puzz[min])
                min=j;
        }
        if (min!=i)
        {
            temp=puzz[i];
            puzz[i]=puzz[min];
            puzz[min]=temp;
        }
    }
    for (i=0;i<=m-n;i++)
    {
        temp=puzz[i+n-1]-puzz[i];
        if (temp<ans)
            ans =temp;
    }
    if (ans==999999)
        ans=0;
    printf ("%d",ans);

}
