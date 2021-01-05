#include <stdio.h>
int main()
{
    int i,j;
    char ch;
    char s[10];
    int c[6]={1,1,1,1,1,1};
    scanf ("%d",&j);
    for (i=0;i<j;i++)
    {
        scanf ("%s",&s);
            if (s[0]=='p')
                c[0]=0;
            if (s[0]=='g')
                c[1]=0;
            if (s[0]=='b')
                c[2]=0;
            if (s[0]=='o')
                c[3]=0;
            if (s[0]=='r')
                c[4]=0;
            if (s[0]=='y')
                c[5]=0;
    }
    printf ("%d\n",6-j);

        if (c[0]==1)
            printf("Power\n");
        if (c[1]==1)
            printf("Time\n");
        if (c[2]==1)
            printf("Space\n");
        if (c[3]==1)
            printf("Soul\n");
        if (c[4]==1)
            printf("Reality\n");
        if (c[5]==1)
            printf("Mind\n");
}
