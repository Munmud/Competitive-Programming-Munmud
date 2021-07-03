#include <stdio.h>
int main ()
{
    int h1,h2,m1,m2,a,b,s;
    scanf ("%d %d %d %d",&h1,&m1,&h2,&m2);

    if (h1==h2 && m1==m2)
        {
            a=24;
            b=0;
        }

    else if (h1==h2 && m1<m2)
        {
            a=0;
            b=m2-m1;
        }
    else if (h1>h2 && m1==m2)
        {
             a=24-h1+h2;
             b=0;
        }
    else if (h1>h2)
        {
            a=23-h1+h2;
            b=60-m1+m2;;
            a=a+b/60;
            b=b%60;
        }

    else if (h1<h2 && m1==m2)
        {
            a=h2-h1;
            b=0;
        }
    else if (h1<h2)
        {
            a=h2-h1-1;
            b=60-m1+m2;
            a=a+(b/60);
            b=b%60;
        }

        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);

}
