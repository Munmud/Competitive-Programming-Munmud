#include <stdio.h>
int s[10005];
int sortMe(int n)
{
    int i,j,temp,min;

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
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
int main ()
{
    int i,n,t,now=0,before,first,last,count=0,temp,ans=0;
    double an;
    scanf ("%d %d",&n,&t);


    for(i=0;i<n;i++)
        scanf ("%d",&s[i]);
    sortMe(n);

    first=s[0]-0;
    last=t-s[n-1];
    for(i=0;i<n;i++)
        {
            before=now;
            now=s[i];
            temp=now-before;

            if (ans<temp)
                ans=temp;

        }
    an=ans/2.0;
    if (first>an )
        an=first;
    if (last>an)
        an=last;
    printf ("%.10f",an);
}
