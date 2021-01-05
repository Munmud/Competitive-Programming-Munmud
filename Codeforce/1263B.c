#include <stdio.h>
int main ()
{
    int n,t,i;
    char a[11][5];
    scanf ("%d",&n);
    while (n--)
    {
        scanf("%d",&t);
        for (i=0;i<t;i++)
        {
            scanf ("%s",&a[i]);
        }
        for (i=0;i<t;i++)
        {
            printf ("%s\n",&a[i]);
        }



    }
}
