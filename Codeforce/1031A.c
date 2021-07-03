#include <stdio.h>
int main()
{
    int r,c,l,cnt=0,i;
    scanf ("%d %d %d",&c,&r,&l);
    for(i=0;i<l;i++)
    {
        cnt+=c*2+(r-2)*2;
        r-=4;
        c-=4;
    }
    printf ("%d",cnt);

}
