#include<stdio.h>
int main()
{
      int n,i,p,sum=0;
	scanf("%d", &n);
	for(i=1;i<=n;++i)
	{
	      scanf("%d",&p);
	      sum+=p;

	}
      printf("%f\n",(float)sum/n);
}
