#include <stdio.h>
int main()
{
    int i,j,c1=0,c2=0;
    int s[200000];
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%d",&s[i]);
        if (s[i]==0)
            c1++;
        else c2++;
    }
    for (i=0;i<j;i++)
    {
        if (s[i]==0)
            c1--;
        else c2--;
        if (c1==0 || c2==0)
            break;
    }
    printf ("%d",i+1);
}
