#include<stdio.h>
int main(){

    int m;
    int n;
    int s=0;
    int a;
    int b;
    int c;
    int i;
    while (scanf("%d%d",&m,&n)!=EOF)
    {   s=0;
        for(i=m;i<=n;i++){
            a=i/100;
            b=i%100/10;
            c=i%10;
            if(i==a*a*a+b*b*b+c*c*c){

                if(s>=1)
                printf(" ");
              
                
                  s++;
                printf("%d",i);
            }
        }

        if(s==0){
            printf("no\n");
        }
        else
        {
         printf("\n");
        }
        
    }
    
}
