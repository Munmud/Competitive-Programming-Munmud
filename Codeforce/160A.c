#include <stdio.h>
int main()
{
    int t=0,n,s[102],i,j,max,temp;
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        scanf ("%d",&s[i]);
        t+=s[i];
    }

    for (i=0;i<n-1;i++){
            max=i;
        for (j=i+1;j<n;j++){
            if (s[j]>s[max])
            max=j;
        }
        if (max!=i){
            temp=s[i];
            s[i]=s[max];
            s[max]=temp;
        }
    }
    int x=0;i=0;
    while (x<=t){
        x+=s[i];
        t-=s[i];
        i++;
    }
    printf ("%d",i);
}
