#include<stdio.h>
int main(){
    int n;
    int s=0;
    int i;
    while((scanf("%d",&n)!=EOF)){
        s=0;
        while(n--){
         
         scanf("%d",&i);
         s=s+i;
        }
        printf("%d\n",s);
    }
    
}