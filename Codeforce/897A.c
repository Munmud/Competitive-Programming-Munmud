#include <stdio.h>
int main ()
{
    int i,j,t,a,b,x;
    char s[100];
    char ch1,ch2;
    scanf ("%d %d",&j,&t);
    scanf ("%s",s);
    for (i=0;i<t;i++)
    {
        scanf ("%d %d",&a,&b);
        x=a-1;
        ch1=getchar();
        ch1=getchar();
        ch2=getchar();
        ch2=getchar();
        for (;x<b;x++)
        {
            if (s[x]==ch1)
                s[x]=ch2;
        }
    }
    printf ("%s\n",s);
}
