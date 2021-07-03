#include <stdio.h>
int main ()
{
    int i,j,k,cnt=0;
    scanf ("%d",&j);
    char s[1000][5];
    char ch;

    for (i=0;i<j;i++)
    {
        scanf ("%s",s[i]);

        if (s[i][0]=='O' && s[i][1]=='O')
        {
            cnt++;
            if (cnt==1)
            {
                ch='+';
                s[i][0]=ch ;
                s[i][1]=ch ;
            }
        }
        else if (s[i][3]=='O' && s[i][4]=='O')
        {
            cnt++;
            if (cnt==1)
            {
                ch='+';
                s[i][3]=ch ;
                s[i][4]=ch ;
            }
        }

    }

    if (cnt>0)
    {
        printf ("YES\n");
        for (i=0;i<j;i++)
        {
            for (k=0;k<5;k++)
            {
                printf ("%c",s[i][k]);
            }
        printf ("\n");

        }

    }
    else printf ("NO");
}
