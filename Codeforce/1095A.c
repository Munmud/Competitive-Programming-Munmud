#include <stdio.h>
int main()
{
    int i,j,x=0,p=0,k=0;
    scanf ("%d",&j);
    char s[56];
    char ch[10];
    scanf("%s",&s);

        for(i=0;i<j;i++)
        {
            k=(i+1)*(i+2)/2;
            if (k==j)
            {
                k=i+1;
                break;
            }
        }
    for(i=0;i<k;i++)
    {
        ch[i]=s[x];
        p++;
        x+=p;
    }
    for(i=0;i<k;i++)
    {
        printf ("%c",ch[i]);
    }
}
