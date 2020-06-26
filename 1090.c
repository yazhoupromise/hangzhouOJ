#include<stdio.h>

int main(){

    int a;
    int b;
    int n;
   while(  (  scanf("%d",&n)!=EOF  )  ){

       for(;n>0;n--){
           scanf("%d%d",&a,&b);
           printf("%d\n",a+b);
       }
   }
return 0;
}