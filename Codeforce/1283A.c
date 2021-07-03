#include <stdio.h>
int main()
{
    int test_case,hour,min,ans;
    scanf ("%d",&test_case);
    while (test_case--)
    {
        scanf ("%d %d",&hour,&min);
        if (min && hour)
        {
            min=60-min;
            hour=24-hour-1;
        }
        else if (hour==0)
        {
            hour=23;
            min=60-min;
        }
        else if (hour)
        {
            hour=24-hour;
        }
        ans=60*hour+min;

        printf ("%d\n",ans);

    }
}
