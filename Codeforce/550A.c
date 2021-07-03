#include <stdio.h>
#include <string.h>
int main()
{
    char inp[100000];
    scanf ("%s",inp);

    int ab=0,ba=0,t=0,aba=0,bab=0,abab=0;
    int i,n,j;

    n=strlen(inp);

    for (i=0;i<n-1;i++)
    {
        if (inp[i]=='A' && inp[i+1]=='B' )
                ab++;
        else if (inp[i]=='B' && inp[i+1]=='A' )
                ba++;
        if  (inp[i]=='A' && inp[i+1]=='B' && inp[i+2]=='A' && i<n-2)
                aba++;
        else if  (inp[i]=='B' && inp[i+1]=='A' && inp[i+2]=='B' && i<n-2)
                bab++;

    }

        if (ab>1 && ba >1)
        {
            t=1;
        }
        else if (ab>2 && ba==1)
        {
            t=1;
        }
        else if (ab==1 && ba>2)
        {
            t=1;
        }
        else if (ab==2 && ba==1)
        {
            if (aba==1 && bab ==1)
                t=0;
            else t=1;
        }
        else if (ab==1 && ba==2)
        {
            if (aba==1 && bab ==1)
                t=0;
            else t=1;
        }
        else if(ab==1 &&ba==1)
        {
            if (aba==1 ||bab==1)
                t=0;
            else t=1;
        }
        else t=0;

    if (t==1)
    printf ("YES");
    else printf ("NO");
}
