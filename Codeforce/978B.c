#include <stdio.h>
int main()
{
    int i,j,cnt=0,a=0;
    char s[100];
    scanf("%d",&j);
    scanf ("%s",s);
    s[j]=='a';
    for (i=0;i<=j;i++)
    {
        if (s[i]=='x')
            cnt++;
        else
        {
            while (cnt>2)
               {
                 a+=1;
                 cnt-=1;
               }
               cnt=0;
        }
    }

    printf ("%d",a);

}
