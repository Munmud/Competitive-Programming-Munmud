#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    scanf ("%d",&d);

    if (a>b &&a>c && a>d)
       {
        printf("%d ",a-b);
        printf("%d ",a-c);
        printf("%d\n",a-d);
        }
    else if (b>a && b>c && b>d)
        {printf("%d ",b-a);
        printf("%d ",b-c);
        printf("%d\n",b-d);}
    else if (c>b &&c>a && c>d)
        {printf("%d ",c-b);
        printf("%d ",c-a);
        printf("%d\n",c-d);}
    else
        {printf("%d ",d-b);
        printf("%d ",d-c);
        printf("%d \n",d-a);}
}
