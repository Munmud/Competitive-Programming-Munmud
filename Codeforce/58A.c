#include <stdio.h>
int main()
{
    char s[8]="hello";
    char h[102];
    int t=0;
    int i,j,x,y,cnt=0,min=0;

    scanf ("%s",h);
    x=strlen(h);
    for (i=0;i<5;i++)
    {
        for (j=min;j<x;j++)
        {
            if (s[i]==h[j])
            {
                min=j+1;
                cnt++;
                break;

            }
        }
    }
    if (cnt==5)
        printf("YES");
    else printf ("NO");
}
