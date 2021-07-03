#include <stdio.h>
int main()
{
    int n,array[100000],i=0,max=0,min=99999,ans=0;
    scanf("%d",&n);
    do
    {
        scanf ("%d",&array[i]);

       if (max<array[i])
        max=array[i];
        if(min>array[i])
        min=array[i];
        i++;
    }while(i<n);

    for(i=0;i<n;i++)
    {
        ans+=array[i]-min
    }

}
