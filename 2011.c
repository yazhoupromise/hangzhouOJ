#include <stdio.h>
int main(){
	int m,n,i,j,tmp;

	double num;
	while(scanf("%d",&m)!=EOF){
		for(i=0;i<m;i++){
			scanf("%d",&n);
			num=0;
            tmp=-1;

           
			for(j=1;j<=n;j++)
			{
				tmp=-tmp;
				num=num+tmp*(1.0/j);
				
			}
			printf("%.2lf\n",num);
			
		}
	}
	return 0;
} 