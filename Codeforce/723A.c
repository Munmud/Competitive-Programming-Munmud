#include <stdio.h>
int main()
{
    int a,b,c,s;
    scanf ("%d %d %d",&a,&b,&c);
    s=abs(a-b)+abs(b-c)+abs(c-a);
    s=s/2;
    printf ("%d",s);
}
