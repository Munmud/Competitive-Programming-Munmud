#include <stdio.h>
int main (){
    int i,j,n,s[1000],difference;
    int min=1000000000,temp,max=0;
    scanf ("%d",&n);
        for (i=0;i<n;i++){
            scanf("%d",&s[i]);
            if (s[i]>max)
                max=s[i];
            if (s[i]<min)
                min=s[i];
        }

        difference=abs(max-min)-n+1;


    printf ("%d",difference);
}
