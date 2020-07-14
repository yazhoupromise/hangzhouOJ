#include<stdio.h>
#include<ctype.h>
int main(){

   char s[1000]={' '};
  while(gets(s)){
     for(int i=0;s[i];i++){

      if(i==0){s[i]=toupper(s[i]);}
      if(s[i]==' '){s[i+1]=toupper(s[i+1]);}
}
puts(s);

   
}
}