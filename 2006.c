#include<stdio.h>
int main(){
int n;
int x;
int s=1;
while(scanf("%d",&n)!=EOF){
s=1;
while(n--){

scanf("%d",&x);
if((x%2!=0)&&x){

s=s*x;
}


}

printf("%d\n",s);
}

}