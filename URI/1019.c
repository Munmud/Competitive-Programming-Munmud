#include <stdio.h>
int main()
{
    int n,h,m,s,v;
    scanf("%d",&n);
    h=n/3600;
    v=n%3600;
    m=v/60;
    s=v%60;
    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
