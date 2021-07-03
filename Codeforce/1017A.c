#include <stdio.h>
int main ()
{
    int i,j,a,b,c,d,t,temp,k,index_max,x;
    int s[1000];
    scanf ("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        s[i]=(a+b+c+d);
    }
    t=s[0];
    for (i=0;i<j-1;i++)
    {
        index_max=i;
        for(k=i+1;k<j;k++)
        {
            if (s[k]>s[index_max])
                index_max=k;
        }
        if (index_max!=i)
        {
            temp=s[i];
            s[i]=s[index_max];
            s[index_max]=temp;
        }
    }
    for(i=0;i<j;i++)
    {
        if (s[i]==t)
            break;
    }
    printf ("%d",i+1);
}
