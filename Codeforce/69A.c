#include <stdio.h>
int main()
{
    int i,n,x=0,y=0,z=0,X=0,Y=0,Z=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d %d %d",&x,&y,&z);
        X+=x;
        Y+=y;
        Z+=z;
    }
    if (X==0 && Y==0 && Z==0)
            printf ("YES\n");
        else printf ("NO");
}
