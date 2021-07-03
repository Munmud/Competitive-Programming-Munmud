#include <stdio.h>
int main()
{
    int a,b,i,j;
    int s1[10],s2[10];
    scanf ("%d %d",&a,&b);
    for (i=0;i<a;i++)
        scanf ("%d",&s1[i]);
    for (j=0;j<b;j++)
        scanf ("%d",&s2[j]);
    for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                if(s2[j]==s1[i])
                    printf ("%d ",s1[i]);
            }
        }


}
