#include <stdio.h>

int main()
{
    double x1,x2,y1,y2,dx,dy,dr,result;

    scanf ("%lf %lf",&x1,&y1);
    scanf ("%lf %lf",&x2,&y2);

    dx = x2-x1;
    dy = y2-y1;
    dr = dx*dx + dy*dy;
    result = sqrt(dr);

    printf ("%.4lf\n",result);

    return 0;
}
