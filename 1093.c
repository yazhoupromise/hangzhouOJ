#include<stdio.h>
int main(){

    int n;int m;
    int s=0;
    int i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
         s=0;
           while(m--){
             
              scanf("%d",&i);
              s=s+i ;
             
           }
           printf("%d\n",s);
        
    }


}