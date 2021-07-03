#include <stdio.h>
int main ()
{
    int m,n,count=0;
    scanf ("%d %d",&m,&n);

    while (m!=0 && n!=0)
    {
        m--;
        n--;
        count++;
    }
    if (count%2==0)
        printf ("Malvika\n");
    else printf ("Akshat\n");
}
