#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r = sqrt(n);
    if(r*r == n)
        printf("%d\n",4*r);
    else if(n <= r*r + r)
        printf("%d\n",4*r+2);
    else
        printf("%d\n",4*r+4);
    return 0;
}
