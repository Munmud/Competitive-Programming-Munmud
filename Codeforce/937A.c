#include <stdio.h>
int main()
{
    int i,j,n,cnt=0;
    int s[102];

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf ("%d",&s[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if ( s[j]==s[i] && s[j]!=0 )
                s[j]=0;
        }
        if (s[i]!=0)
            cnt++;
    }
    if (s[n-1]!=0)
        cnt++;
    printf ("%d",cnt);

}
