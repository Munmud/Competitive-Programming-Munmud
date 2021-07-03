#include <stdio.h>
int main()
{
    int s,v1,v2,t1,t2,a,b;

    scanf ("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);

    a=s*v1+2*t1;
    b=s*v2+2*t2;

    if (a<b)
        printf ("First");
    else if(a>b)
        printf ("Second");
    else printf ("Friendship");

}
