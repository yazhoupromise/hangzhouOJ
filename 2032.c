#include<stdio.h>		//杨辉三角，（行数-列数）*左侧数值/列数 
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		printf("1\n");
		for (int i = 2,left=1; i <= n; i++,left=1)
		{
			printf("1 ");
			for (int j = 1; j <= i - 2; j++)		//列号为去掉两端 1 后的编号
			{
				left = (i - j)*left / j;
				printf("%d ",left);
			}
			printf("1\n");
		}
		printf("\n");
	}
}