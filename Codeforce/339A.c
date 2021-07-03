#include <stdio.h>
int main()
{
    char s[102];
    scanf ("%s",s);
    int l=strlen(s);
    int i,j,min;
    char temp;

    for (i=0;i<l-1;i++)
    {
        if (s[i]!='+')
        {
            min=i;
            for (j=i+1;j<l;j++)
            {
                if (s[j]!='+')
                {
                    if (s[j]<s[min])
                    min=j;
                }
            }
            if (min!=i)
            {
                temp=s[i];
                s[i]=s[min];
                s[min]=temp;
            }
        }
    }
    printf ("%s",s);

}
