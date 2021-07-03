#include <stdio.h>
int sortMe(const void *first,const void *second)
{
    int *a = (int *)first;
    int *b = (int *)second;

    if (*a>*b)
        return 1;
    else if (*a<*b)
        return -1;
    else return 0;
}
int main()
{
    int n,i;
    int a1[100000],a2[100000],a3[100000];
    scanf ("%d",&n);

    for (i=0;i<n;i++)
        scanf ("%d",&a1[i]);

    qsort(a1,n,sizeof(int),sortMe);

    for (i=0;i<n-1;i++)
        scanf ("%d",&a2[i]);

    qsort(a2,n-1,sizeof(int),sortMe);

    for (i=0;i<n;i++)
    {
        if (a1[i]==a2[i])
        {

        }
        else
        {printf ("%d\n",a1[i]);
        break;}
    }
    for (i=0;i<n-2;i++)
        scanf ("%d",&a3[i]);
    qsort(a3,n-2,sizeof(int),sortMe);

    for (i=0;i<n;i++)
    {
        if (a2[i]==a3[i])
        {

        }
        else{printf ("%d\n",a2[i]);
        break;}
    }



}

