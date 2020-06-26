#include <stdio.h>
int main()
{
	int sum,n,m,i,b;
	scanf("%d",&n);
	while(n--)
     {
		if(scanf("%d",&m)!=EOF)
		{
			sum=0;
			for(i=0;i<m;i++)
			{
				scanf("%d",&b);
				sum+=b;
			}
			printf("%d\n",sum);
			if(a!=0)
			printf("\n",sum);
		}
	}        
	return 0;
}
