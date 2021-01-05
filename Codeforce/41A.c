#include <stdio.h>
int main()
{
    char temp,s[105],t[105];
    scanf (" %s",s);
    scanf (" %s",t);
    int i,x=strlen(s),tru=1;
    for (i=0;i<strlen(s);i++){
        if (s[i]!=t[x-1]){
            tru=0;
            break;
        }x--;
    }
    if (tru)
        printf ("YES");
    else printf ("NO");
}
