#include <stdio.h>
#include <stdlib.h>

//拆分成两个循环,注意有多组数据，所以要设定好初始化
int main()
{
	int n,m;
	int i,j;
	int sign;
	int sum;
    int x=2;
	while (scanf("%d %d",&n,&m)!=EOF)
	{   x=2;
		for (i=1;i<=n;)
		{
			sum = 0;
			sign = 0;
            
			for (j=1;j<=m&&i<=n;j++)
			{   
				sum = sum + x;
                x=x+2;
				sign++;
				i++;
			}
			printf("%d",sum/sign);
			if (i<=n)
				printf(" ");
		}
		printf("\n");
	}
}


