#include <stdio.h>
int main()
{
    int i,j,n,t,min,max,c=1,x;
    int s[102];
    scanf ("%d",&n);

    for (i=0;i<n;i++)
        scanf ("%d",&s[i]);
    x=n/2;
    while (x--){
    for (i=0;i<n;i++){
                if (c==1){
                for(j=0;j<n;j++){
                    if (s[j]!=0){
                        min=j;
                    break;
                    }
                }
                for (t=n-1;t>-1;t--){
                    if (s[t]!='0'){
                        max=t;
                        break;
                    }
                }
                }
        c=0;
        if (s[min]>s[i] && s[i]!=0)
            min=i;
        if (s[max]<=s[i])
            max=i;
    }
   printf ("%d %d\n",min+1,max+1);
   s[min]=0;
   s[max]=0;
   c=1;
    }
}
