#include <stdio.h>
int main()
{
    int i,j,k,l,cnt=0,a,b;
    int s[101];
    scanf ("%d %d",&j,&l);
    for(i=0;i<j*l;i++)
    {
        scanf ("%d %d",&a,&b);
        if (a==1 || b==1)
            cnt++;
    }

    printf ("%d",cnt);
}
