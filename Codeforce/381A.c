#include<stdio.h>
main()
{
   int n;
   scanf("%d",&n);

   int i,a[n];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

    int l=0,h=n-1,d=0,s=0,m;
    i=0;
    while(i<n)
    {
       if(a[l]>a[h])
       {
          m=a[l];
          l++;
       }
       else
       {
          m=a[h];
          h--;
       }
       if((i+1)%2==0)
        s+=m;
       else d+=m;
       i++;
    }
    printf("%d %d",d,s);
    return 0;
}
