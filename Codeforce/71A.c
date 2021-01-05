#include <stdio.h>
int main()
{
    int i,j,length;
    char s[101];
    scanf("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%s",s);
        length = strlen(s);
        if (length>10)
        {
            printf ("%c",s[0]);
            printf ("%d",length-2);
            printf ("%c\n",s[length-1]);
        }
        else printf ("%s\n",s);
    }
}
