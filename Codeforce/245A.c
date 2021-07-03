#include <stdio.h>
int main ()
{
    int n,i,a=0,b=0,c,x,y,x1=0,x2=0,y1=0,y2=0;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf ("%d %d %d",&c,&x,&y);
        if (c==1)
        {
            x1+=x;
            y1+=y;
        }
        else if (c==2)
        {
            x2+=x;
            y2+=y;
        }
    }

    if (x1>y1 || x1==y1)
                a=1;
    if (x2>y2 || x2==y2)
                b=1;

    if(a==1)
        printf ("LIVE\n");
    else printf ("DEAD\n");
     if(b==1)
        printf ("LIVE\n");
    else printf ("DEAD\n");
}
