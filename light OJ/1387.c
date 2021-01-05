#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l,p,s;
    char a[20];
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf("%d",&l);
        s=0;
        printf ("Case %d:\n",i);
        for (k=1;k<=l;k++)
        {
            scanf("%s",&a);
            if (a[0] == 'd')
            {
                scanf("%d",&p);
                s=s+p;
            }
            else if (a[0] == 'r')
            {
                printf ("%d\n",s);
            }
        }
    }
}
