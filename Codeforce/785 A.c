#include <stdio.h>
int main()
{
    int i,j,n=0;
    char shape[20];
    scanf ("%d",&i);
    for (j=1;j<=i;j++)
    {
        scanf ("%s",&shape);
        if (shape[0]=='T')
            n=n+4;
        else if (shape[0]=='C')
            n=n+6;
        else if (shape[0]=='O')
            n=n+8;
        else if (shape[0]=='D')
            n=n+12;
        else if (shape[0]=='I')
            n=n+20;
    }
    printf ("%d\n",n);

    return 0;
}
