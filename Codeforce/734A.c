#include <stdio.h>
int main()
{
    int i,j,a=0,d=0;
    scanf ("%d",&j);
    char s[j+1];
    scanf ("%s",&s);
    for (i=0;i<j;i++)
    {
        if (s[i]=='A')
            a++;
        else  if (s[i]=='D')
            d++;
    }
    if (a==d)
        printf ("Friendship");
    else if (a>d)
        printf ("Anton");
    else if (a<d)
        printf ("Danik");
}
