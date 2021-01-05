#include <stdio.h>
int main()
{
    int n,a,b,i;
    scanf ("%d",&n);
    while (n--)
    {
        scanf("%d %d",&a,&b);
        for (;a<=b;a++)
        {
            if (a==2 || a==3 || a==5 || a==7)
                printf ("%d\n",a);
            else if (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1)
                printf ("%d\n",a);
        }
        printf ("\n");
    }
}
