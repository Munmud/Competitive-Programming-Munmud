#include <stdio.h>
int main()
{
    int n,m,i;
    int s[102];
    scanf ("%d %d",&n,&m);
    for (i=0;i<n;i++)
        scanf ("%d",&s[i]);

    int j,temp,min;
    for(i=0;i<n-1;i++){
            min=i;
        for(j=i+1;j<n;j++){
            if (s[j]<s[min])
                min=j;
        }
        if (min!=i){
            temp=s[i];
            s[i]=s[min];
            s[min]=temp;
        }
    }
    int sum=0,x;
    temp=0;
    for(i=n-1;i>-1;i--){
          x=temp+s[i];
          if (x<m){
            temp+=s[i];
            sum++;
          }
          else{
                sum++;
            break;
          }
    }

    printf ("%d",sum);
}
