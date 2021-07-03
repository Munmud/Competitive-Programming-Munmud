#include <stdio.h>
int main()
{
    int i,j,x=0,y=0,n;
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%d",&n);
        if (n>=10 && n<=20)
            x+=1;
        else y+=1;
    }
    printf ("%d in\n%d out\n",x,y);
}
