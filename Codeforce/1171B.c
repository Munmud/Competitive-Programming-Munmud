#include <stdio.h>
int main()
{
    int r,b,y,B,R,t=0;
    scanf ("%d %d %d",&y,&b,&r);

    B=y+1;
    R=y+2;
    while (!t){
    if (b>=B && r>=R)
        t=1;
    else {
        y--;
        B=y+1;
        R=y+2;
    }
    }
    printf ("%d",y+B+R);
}
