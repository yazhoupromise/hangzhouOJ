#include<stdio.h>
#include <math.h>

 
int isPrime(int n){ //判断n是否为素数
	if(n==0) return 0;//0和1不是素数
	if(n==2||n==3) return 1;//2和3是素数
		
	for(int i=2; i<=sqrt(n); i++)//在根号n之前
		if(n%i==0) return 0;
		
	 return 1;
	
}
 
int main(){
	int x, y;
	while(scanf("%d%d",&x,&y)!=EOF){
		if(x==0&&y==0)
			break;
			
		int flag=1;
		for(int i=x; i<=y; i++)
			if(!isPrime(i*i+i+41)){
				flag=0;
				break;
			}
				
		if(flag)
			printf("OK\n");
		else
			printf("Sorry\n");
			
	}	
} 