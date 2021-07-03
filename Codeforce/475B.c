#include <stdio.h>
int main()
{
    int n,m;
    int t=1;
    scanf ("%d %d",&n,&m);

    char na[21],ma[21];
    scanf ("%s",na);
    scanf ("%s",ma);

    if (na[0]=='<' && ma[0]=='^')
        t=0;
    if (na[0]=='>' && ma[m-1]=='^')
        t=0;
    if (na[n-1]=='<' && ma[0]=='v')
        t=0;
    if (na[n-1]=='>' && ma[m-1]=='v')
        t=0;

    if (t)
    printf ("YES");
    else printf ("NO");

}
