#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,a,b,s;
    scanf ("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d %d",&a,&b);
        s= (abs(a-b) + (a-0))*4 + 19;
        printf ("Case %d: %d\n",i,s);
    }

    return 0;
}
