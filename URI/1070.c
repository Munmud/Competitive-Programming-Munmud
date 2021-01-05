#include <stdio.h>
int main ()
{
    int i,j,t=0;
    scanf ("%d",&i);
    for (;;i++)
    {
        if (i%2!=0){
            t=t+1;
            printf ("%d\n",i);
        }
        if (t==6)
            break;


}
}
