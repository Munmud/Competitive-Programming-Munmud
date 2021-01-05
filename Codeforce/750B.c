#include<stdio.h>
int main()
{
	int n,d=0,t,flag=0,i;
	char c[6];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&t,c);
		if(d<0|| d>20000 || d==0 && c[0]!='S' || d==20000 && c[0]!='N')
		{
			flag=1;
			break;
		}
		if(c[0]=='N') d-=t;
		if(c[0]=='S') d+=t;
	}
	if(d || flag) printf("NO\n");
	else printf("YES\n");
	return 0;
}
