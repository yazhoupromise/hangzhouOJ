#include<stdio.h>
int main(){
	int n,x[3],y[3]; 
	double sum;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		if(n>=3&&n<=100){
			sum=0.0;
			scanf("%d%d",&x[0],&y[0]);
			x[2]=x[0];                           //存放最后要乘的点 
		    y[2]=y[0];
		    while(--n){
		    	scanf("%d%d",&x[1],&y[1]);
		    	sum+=x[0]*y[1]-x[1]*y[0];
		    	x[0]=x[1];
		    	y[0]=y[1];
			}
			sum+=x[0]*y[2]-y[0]*x[2]; 
		}
		printf("%.1f\n",sum/2);                //和要除以2 
	}
	return 0;
}