#include <stdio.h>
int main()
{
    int i,s[4],p,a,sum=0;
    char x[100000];

    for(i=0;i<4;i++)
    {
        scanf ("%d",&s[i]);
    }

    scanf ("%s",&x);
    p=strlen(x);
    for (i=0;i<p;i++)
    {
        if (x[i]=='1')
        sum+=s[0];
        else if (x[i]=='2')
        sum+=s[1];
        else if (x[i]=='3')
        sum+=s[2];
        else if (x[i]=='4')
        sum+=s[3];
    }

    printf ("%d",sum);



}
