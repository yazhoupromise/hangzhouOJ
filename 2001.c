#include<stdio.h>
#include<math.h>//头文件

int main(){
double x1,x2,y1,y2,d;//double的占位符号是lf
scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
d=sqrt(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));//开根号函数
printf("%.2f\n",d);

}