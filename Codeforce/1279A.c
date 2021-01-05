#include <stdio.h>
int less(int a,int b,int c)
{
    if (a>=b && a>=c)
        return 1;
    else if (b>=a && b>=c)
        return 2;
    else return 3;
}
int main()
{
    int t,temp,s,ans;
    int a,b,c;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d %d %d",&a,&b,&c);
        temp=less(a,b,c);
        //printf ("%d",temp);
       if (temp==1)
       {
           temp=a;
          ans=b+c;
          if (temp-ans>1)
            printf("No\n");
          else printf ("Yes\n");
       }
       else if (temp==2)
       {
           temp=b;
          ans=a+c;
          if (temp-ans>1)
            printf("No\n");
          else printf ("Yes\n");
       }
       else if (temp==3)
       {
           temp=c;
          ans=a+b;
          if (temp-ans>1)
            printf("No\n");
          else printf ("Yes\n");
       }



    }
}
