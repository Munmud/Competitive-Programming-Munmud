#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,ans,half,j,value;
    scanf ("%d",&n);

    char s[101];
    char temp[n];
    scanf ("%s",s);

    half=n/2;

        for (j=0;j<half;j++)
        {
            temp[j]=s[j];
            printf ("%s\n",temp);
        }




}
