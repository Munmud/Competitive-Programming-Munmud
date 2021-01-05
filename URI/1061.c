#include <stdio.h>
#include <string.h>
int main ()
{
    char a[4],b[2],c[2],d[4],e[2],f[2];
    int d1,d2,h1,h2,m1,m2,s1,s2;
    int s,z,y,n,h,m;
    scanf ("%s%d",&a,&d1);
    scanf ("%d%s%d%s%d",&h1,&b,&m1,&c,&s1);
    scanf ("%s%d",&d,&d2);
    scanf ("%d%s%d%s%d",&h2,&e,&m2,&f,&s2);

    if (d1==d2)
        {
            z= 60-s1 + (60-m1-1)*60 + (24-h1-1)*3600;
            y= 60-s2 + (60-m2-1)*60 + (24-h2-1)*3600;
            s=z-y;
        }
    else if (d2==d1+1)
    {
        s= 60-s1 + (60-m1-1)*60 + (24-h1-1)*3600;
        s=s+s2+m2*60+h2*3600;
    }
    else
    {
        s= 60-s1 + (60-m1-1)*60 + (24-h1-1)*3600;
        s=s+s2+m2*60+h2*3600;
        s=s+(d2-d1-1)*86400;
    }
    n=s/86400;
    s=s%86400;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf ("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",n,h,m,s);

}
