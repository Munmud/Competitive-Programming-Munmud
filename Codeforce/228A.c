#include <stdio.h>
int main()
{
    int i,n,cnt=0;
    int s[4];
    for (i=0;i<4;i++)
        scanf ("%d",&s[i]);

    for (i=0;i<3;i++){
        for(n=i+1;n<4;n++){
            if (s[i]==s[n] && s[n]!=0){
                cnt++;
                s[n]=0;
            }
        }
    }
    printf ("%d",cnt);
}
