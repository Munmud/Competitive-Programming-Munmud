#include <stdio.h>

int main()
{
    int a,b;
    float t;
    scanf ("%d %d",&a,&b);

    if(a==1)
    {
        t= 4.00 * b ;
        printf ("Total: R$ %.2f\n",t);
    }
    else if(a==2)
    {
        t= 4.50 * b ;
        printf ("Total: R$ %.2f\n",t);
    }
    else if(a==3)
    {
        t= 5.00 * b ;
        printf ("Total: R$ %.2f\n",t);
    }
    else if(a==4)
    {
        t= 2.00 * b ;
        printf ("Total: R$ %.2f\n",t);
    }
    else if (a==5)
    {
        t= 1.50 * b ;
        printf ("Total: R$ %.2f\n",t);
    }

    return 0;
}
