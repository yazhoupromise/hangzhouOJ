#include<stdio.h>

int tao(int x){
    int t;
    t=2*(x+1);
   return t;
}
int main(){
int n;
int i;
int t;
while(scanf("%d",&n)!=EOF){
     t=1;
  for(int i=1;i<n;i++){
       t=tao(t);
       
}

printf("%d\n",t);

}

}