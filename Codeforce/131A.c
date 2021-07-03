#include <stdio.h>
int main()
{
    char s[105];
    scanf ("%s",s);
    int l=strlen(s);
    int i,cnt=1;
    for (i=1;i<l;i++){
        if (s[i]<='z' && s[i]>='a')
            cnt=0;
        if (!cnt)
            break;
    }
    if (cnt){
        for (i=0;i<l;i++){
        if (s[i]<='Z' && s[i]>='A')
            s[i]+=32;
    else s[i]-=32;
        }
    }
    printf ("%s",s);
}
