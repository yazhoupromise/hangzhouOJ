#include <stdio.h>
int main()
{
	int sum,a,n,i,b;
	scanf("%d",&a);
	while(a--)
     {
		if(scanf("%d",&n)!=EOF)
		{
			sum=0;
			for(i=0;i<n;i++)
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
