#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0||b==0)
		break;
		int i=1;
		while(b--){
			i=i*a%1000;
		}
		printf("%d\n",i);
	}
	return 0;
} 
