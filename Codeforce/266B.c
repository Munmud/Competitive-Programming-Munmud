#include <stdio.h>
int main()
{
    int n,i,tme;
    char s[10000];
    scanf ("%d %d",&n,&tme);
    scanf (" %s",s);

    while (tme--){
        for (i=1;i<n;i++){
            if (s[i-1]=='B' && s[i]=='G'){
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    printf ("%s",s);
}
