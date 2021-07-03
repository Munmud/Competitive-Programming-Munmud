#include <stdio.h>
int main()
{
    int i,j,n,x,cnt=0;
    char s[100];
    scanf ("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf ("%d",&n);

            scanf ("%s",&s);

        for(x=0;x<n;x++){
            if (s[x]=='8' && cnt==0){
                if(n-x>10)
                    cnt++;
            }
        }
        if (cnt>0)
            printf ("Yes\n");
        else printf ("NO\n");
        cnt=0;

    }
}
