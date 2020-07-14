#include<stdio.h>

int main(){
    char s[100];
    int max;
    int i;
 while (gets(s))
 {
      for(max=i=0;s[i];i++){
          if(s[i]>max)
              max=s[i];
          
      }
    for(i=0;s[i];i++){
        putchar(s[i]);
        if(s[i]==max){
           printf("%s","(max)");
        }
        
    }

putchar('\n');
 }
 


}