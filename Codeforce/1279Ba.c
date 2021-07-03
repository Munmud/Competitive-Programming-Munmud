#include <stdio.h>
int a[100000];
int check(int i,int time,int sum)
{
    int temp=0,temp2,ans=0;
    for (int j=0;j<time;j++)

        {
            temp2=temp;
            if (j!=i)
                {
                    temp2=temp+a[j];
                    if (temp2<=sum)
                    {
                        temp+=a[j];
                        ans++;
                    }
                    else break;

                }
        }
        //printf ("%d %d\n",ans,i);
        return ans;
}
int main ()
{
    int test_case,time,sum,i,ans1,ans=0,mans;
    scanf ("%d",&test_case);
    while (test_case--)
    {
        scanf ("%d %d",&time,&sum);
        for (i=0;i<time;i++)
            scanf ("%d",&a[i]);
        for (i=-1;i<time;i++)
            {
                ans1=check(i,time,sum);
                if (ans1>=ans)
                {
                    ans=ans1;
                    mans=i+1;
                }

            }
    printf ("%d\n",mans);
    mans =0;

    }
}
