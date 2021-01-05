#include <stdio.h>
int main ()
{
    int i,j,t,temp=0;
    int a[30],b[30];

    scanf("%d",&j);
    for (i=0;i<j;i++)
      scanf ("%d%d",&a[i],&b[i]);


    for (i=0;i<j;i++){
        for(t=0;t<j;t++){
            if (a[i]==b[t])
                temp++;
        }

    }

    printf ("%d",temp);
}
