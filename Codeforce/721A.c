#include <stdio.h>
int main ()
{
    int i,j,cnt=0,c2=0;
    char s[100],s2[100];

    scanf ("%d",&j);
    scanf ("%s",&s);

    for (i=0;i<=j;i++)
    {
        if (s[i]=='B')
            {
                cnt++;
            }
        else
        {
            if (cnt>0)
            {
                s2[c2]=cnt;
                c2++;
            }
            cnt=0;
        }
    }

    printf ("%d\n",c2);
    for (i=0;i<c2;i++)
        printf ("%d ",s2[i]);
}
