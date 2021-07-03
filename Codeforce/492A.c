#include <stdio.h>
int main()
{
    int n,r=1,i,temp=0,count=0,temp2,j;
    scanf ("%d",&n);


    for (i=1;r==1;i++)
    {
        temp2=i*(i+1)/2;
        if (temp+temp2<=n)
        {
            temp+=temp2;
            count++;
        }
        else r=0;
    }

    printf ("%d",count);

}
