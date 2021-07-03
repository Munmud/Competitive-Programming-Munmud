#include <stdio.h>
int main()
{
    int n;
    int a,b,c,s=0,temp;
    scanf ("%d",&n);
    while (n--)
    {
        s=0;
        scanf ("%d %d %d",&a,&b,&c);


            if (b>0 && c>1)
            {
                temp=c/2;
                if (temp>=b)
                {
                    s+=b*3;
                    c-=b*2;
                    b=0;
                }
                else
                {
                    s+=temp*3;
                    c-=temp*2;
                    b-=temp;
                }
            }
            if (a>0 && b>1)
            {
                temp=b/2;
                if (temp>=a)
                {
                    s+=a*3;
                    b-=a*2;
                    a=0;
                }
                else
                {
                    s+=temp*3;
                    b-=temp*2;
                    a-=temp;
                }
            }


        printf ("%d\n",s);
}
}
