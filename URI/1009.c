#include <stdio.h>

int main ()
{
    int fname[50];
    double fs,tsell,salary;

    scanf ("%s",&fname);
    scanf ("%lf",&fs);
    scanf ("%lf",&tsell);

    salary = fs + (tsell*15/100);

    printf ("TOTAL = R$ %.2lf\n",salary);

    return 0;
}
