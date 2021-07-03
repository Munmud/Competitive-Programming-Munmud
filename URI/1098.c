#include <stdio.h>
int main()
{
    double i=0.0,j=1.0,k;
    int count=0;
    while (i<=2.0)
    {
        count =0;

        while (j>=1)
        {
            k=j;

            while (k>=1)
            {
                if (i==1.0||i==0.0||i== 2.0)
                    printf ("I=%.0lf J=%.0lf\n",i,k);
                else
                printf ("I=%.1lf J=%.1lf\n",i,k);

                k+=1.0;
                count++;

                if (count == 3)
                break;
            }
            break;
        }

        i+=.2;
        j+=.2;


    }
}
