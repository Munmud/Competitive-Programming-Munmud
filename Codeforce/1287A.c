#include<stdio.h>
int count_a;
int main()
{
    int test_case,n,ans,temp,i,ini=0;
    int angry_array[101];
    char c;
    scanf ("%d",&test_case);
    while (test_case--)
    {
        temp=0;
        ans=0;
        count_a=0;

        scanf("%d",&n);
        getchar();

        for(i=0;i<n;i++){
            c=getchar();
            if (c=='A'){
                angry_array[count_a]=i;
                count_a++;

            }
        }

        if (count_a)
        {
            for(i=0;i<count_a-1;i++){
                temp=angry_array[i+1]-angry_array[i]-1;
                if (temp>ans)
                    ans=temp;
            }
            temp=n-1-angry_array[i];
            if (temp>ans)
                    ans=temp;

            printf ("%d\n",ans);
        }
        else printf ("0\n");
    }
}
