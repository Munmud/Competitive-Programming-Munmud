#include <stdio.h>
int main()
{
    int b=0,i=0;
    char a,s[3],h[1000];
    a=getchar();
    while (b==0)
    {
        scanf ("%s",s);
        if (s[0]=='}')
            break;
        else if (s[0]>='a' && s[0]<='z')
        {
            h[i]=s[0];
            i++;
        }
        if (s[1]=='}')
            break;
    }
    int x,y,z,cnt=0;
    for (x=0;x<i-1;x++)
    {
        for (y=x+1;y<i;y++)
        {
            if(h[x]==h[y])
            {
                cnt++;
                break;
            }
        }
    }
    printf ("%d",i-cnt);
}
