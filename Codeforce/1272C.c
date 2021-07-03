#include <stdio.h>
int main()
{
    long long int n,t,i,j,temp, current=0;
    long long int ans=0;
    char s[2000000],a[28],c;
    scanf ("%lld %lld",&n,&t);

    scanf("%s",s);
    getchar();

    for(i=0;i<t;i++)
        {
           scanf ("%c",&c);
           getchar();
           a[i]=c;

        }

    for(i=0;i<n;i++)
    {
        temp=0;
        for(j=0;j<t;j++)
        {
            if (s[i]==a[j])
            {

                temp=1;
                break;
            }
        }
        if(temp)
        {
            current++;
        }
        else
        {
            if(current>2)
                {
                    ans+=current*(current+1)/2;
                }
            else if(current==2)
                {
                    ans+=3;
                }
            else
                {
                    ans+=current;
                }
            current=0;
        }
    }
            if(current>2)
                {
                    ans+=current*(current+1)/2;
                }
            else if(current==2)
                {
                    ans+=3;
                }
            else
                {
                    ans+=current;
                }

   printf("%lld",ans);




}
