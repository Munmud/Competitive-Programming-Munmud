#include <stdio.h>
int main ()
{
    int a,b,i,j,s=0;
    scanf ("%d",&i);
    scanf ("%d",&j);
    if (i>j)
    {
        b=i;
        a=j;
    }
    else if (i=j)
        a=b=i;
    else
    {
        b=j;
        a=i;
    }

    for (a=a+1;a<b;a++)
    {
        if (a%2!=0)
            s=s+a;
    }


    printf ("%d\n",s);
}
