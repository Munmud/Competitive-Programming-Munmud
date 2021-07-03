#include <stdio.h>
int main ()
{
    int n;
    scanf ("%d",&n);

    char inp[105];
    scanf ("%s",inp);

    int i,temp;
    temp=n;

    for (i=0;i<n-1;i++)
    {
        if (inp[i]=='R' && inp[i+1]=='U')
        {
            i++;
            temp--;

        }
        else if (inp[i]=='U' && inp [i+1]=='R')
        {
            i++;
            temp--;
        }
    }

    printf ("%d\n",temp);
}
