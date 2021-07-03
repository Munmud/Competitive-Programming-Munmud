#include <stdio.h>
#include <string.h>
int main()
{
    char song[500];
    int i;
    int n,temp;
    int count=0;
    int count2=0;

    scanf ("%s",&song);

    n=strlen(song);
    for (i=0;i<n;i++)
    {
        if (song[i]=='W' && song[i+1]=='U' && song[i+2]=='B')
        {

            i+=2;
            if (count2==1)
            {
                count++;
                if (temp!=count)
                {
                temp=count;
                if (count>0)
                    printf (" ");
                }
            }
        }
        else
        {
            printf ("%c",song[i]);
            count2=1;
            count++;
        }

    }
}
