#include <stdio.h>
int main()
{
    int i,j,n=0,p=0;
    scanf ("%d",&j);
    int s[j];
    for (i=0;i<j;i++)
    {
        scanf ("%d",&s[i]);
        if (n<s[i])
            n=s[i];
    }
    for (i=0;i<j;i++)
    {
       p+=n-s[i];
    }

    printf ("%d",p);

}
