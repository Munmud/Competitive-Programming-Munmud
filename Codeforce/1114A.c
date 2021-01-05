#include <stdio.h>
int main()
{
    int A,D,M;
    int g,p,b;

    scanf ("%d %d %d",&A,&D,&M);
    scanf ("%d %d %d",&g,&p,&b);

    if (A<=g)
    {
        g-=A;
        p+=g;
        if (D<=p)
        {
            p-=D;
            b+=p;
            if (M<=b)
            {
                printf ("YES");
            }
             else printf ("NO");
        }
         else printf ("NO");
    }
    else printf ("NO");
}
