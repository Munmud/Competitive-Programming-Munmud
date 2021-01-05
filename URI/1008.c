#include <stdio.h>

int main ()
{
    int num,hour;
    float salary,a;

    scanf ("%d",&num);
    scanf ("%d",&hour);
    scanf ("%f",&salary);

    a= hour * salary;

    printf ("NUMBER = %d\n",num);
    printf ("SALARY = U$ %.2f\n",a);

    return 0;

}
