#include <stdio.h>
int main()
{
    int n,i,max,min,ans;
    scanf ("%d",&n);

    int a[n];
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    max=0;
    min=0;

    for (i=0;i<n;i++)
    {
        if (a[max]<a[i])
            max=i;
        if (a[min]>=a[i])
            min=i;
    }
    if (max<min)
        printf ("%d",max+n-min-1);
    else printf ("%d",max+n-min-2);


}
