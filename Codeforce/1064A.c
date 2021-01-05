#include <stdio.h>
int main()
{
    int a,i,s[3],min,temp,k;
    scanf ("%d %d %d",&s[0],&s[1],&s[2]);
    for (i=0;i<2;i++)
    {
        min=i;
        for (k=i+1;k<3;k++)
        {
            if (s[k]<s[min])
            min=k;
        }
        if (min!=i)
        {
            temp=s[i];
            s[i]=s[min];
            s[min]=temp;
        }
    }
    a=s[0]+s[1];
    if (a>s[2])
        printf ("0");
    else printf ("%d",s[2]-a+1);
}

