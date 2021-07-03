#include <stdio.h>
int main()
{
    int a,b,c,large;
    int t1,t2,t3,t4,t5,t6;
    scanf ("%d %d %d",&a,&b,&c);

    t1=a+b+c;
    t2=a+b*c;
    t3=a*b+c;
    t4=a*b*c;
    t5=(a+b)*c;
    t6=a*(b+c);

    large=t1;
    if (t2>large)
        large=t2;
    if (t3>large)
        large=t3;
    if (t4>large)
        large=t4;
    if (t5>large)
        large=t5;
    if (t6>large)
        large=t6;

    printf ("%d",large);
    return 0;
}
