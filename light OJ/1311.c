#include <stdio.h>

int main ()
{
    int i,j;
    double u1,u2,u3,a1,a2,t,t1,t2,s1,s2,d;
    scanf ("%d",&j);
    for (i=1;i<=j;i++)
    {
        scanf ("%lf %lf %lf %lf %lf",&u1,&u2,&u3,&a1,&a2);

        t1=u1/a1;
        t2=u2/a2;
        if (t1>=t2)
            t=t1;
        else t=t2;
        s1=u1*t1-0.5*a1*t1*t1;
        s2=u2*t2-0.5*a2*t2*t2;
        d=s1+s2;
        printf ("Case %d: %lf %lf\n",i,d,u3*t);
    }

}

