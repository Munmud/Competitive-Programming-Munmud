#include <stdio.h>
int main ()
{
    double n1,n2,n3,n4,n5;
    double a,b,c,d,media;

    scanf ("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    a = n1 *2.0;
    b = n2 *3.0;
    c = n3 *4.0;
    d = n4 *1.0;
    media = (a+b+c+d)/10.0;

    printf("Media: %.1lf\n",media);

    if (media>=7.0)
    {
        printf ("Aluno aprovado.\n");
    }
    else if (media<5.0)
    {
         printf ("Aluno reprovado.\n");
    }
    else
    {
        printf ("Aluno em exame.\n");
        scanf ("%lf",&n5);
        printf ("Nota do exame: %.1lf\n",n5);
        media = (media + n5)/2.0;

        if (media>=5.0)
        {
            printf ("Aluno aprovado.\n");
        }
        else
        {
             printf ("Aluno reprovado.\n");
        }
        printf ("Media final: %.1lf\n",media);
    }

    return 0;
}
