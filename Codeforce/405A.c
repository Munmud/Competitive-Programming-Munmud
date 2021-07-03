#include <stdio.h>
#include <stdlib.h>

int sortMe(const void *first, const void *second)
{
    int *a = (int*)first;
    int *b = (int*)second;
    if (*a>*b){
        return 1;
    }
    else if (*b> *a){
        return -1;
    }
    else return 0;

}

int main()
{
    int n,i;
    int sort[105];
    scanf ("%d",&n);

    for (i=0;i<n;i++)
        scanf ("%d",&sort[i]);

    qsort (sort,n,sizeof(int),sortMe);

    for (i=0;i<n;i++)
        printf ("%d ",sort[i]);
}
