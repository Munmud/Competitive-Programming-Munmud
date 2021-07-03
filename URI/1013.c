#include <stdio.h>
int main()
{
    int a,b,s,r;

    scanf("%d %d %d",&a,&b,&s);

    if ( a>b && a>s)
    {
        r=a;
    }
    else if (b>a && b>s)
    {
        r=b;
    }
    else
    {
        r=s;
    }

    printf ("%d eh o maior\n",r);

    return 0;

}
