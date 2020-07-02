#include<stdio.h>
#include<algorithm>
using namespace std;//要加这一行来输入sort函数
int main(){
int n;
int a[100000];
int i;
double s=0.00;//都要为double类型，否则会丢失精度
double sum=0.00;
while(scanf("%d",&n)!=EOF){
   s=0.00;
   for(i=0;i<n;i++){

     scanf("%d",&a[i]);
     
    }

    sort(a,a+n);
    for(int i=1;i<n-1;i++){
      s=s+a[i];

}    sum=s/(n-2);
    printf("%.2lf\n",sum);

}


}


