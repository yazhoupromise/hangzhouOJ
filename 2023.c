#include<stdio.h>
int main() {
    int n,m;
    double a1[50][5],av1[50],av2[5],k;
    while(scanf("%d %d",&n,&m)==2) {
        int x,y=0;
        for(int pe=0; pe<n; pe++) {
            for(int su=0; su<m; su++)
                scanf("%lf",&a1[pe][su]);
        }
        for(int i=0; i<n; i++) {
            k=0;
            for(int j=0; j<m; j++)
                {k+=a1[i][j];}
           
            av1[i]=k/m;// 每个学生的平均成绩

        }
        for(int i=0; i<m; i++) {
            k=0;
            for(int j=0; j<n; j++)
                k+=a1[j][i];
            av2[i]=k/n;//每门课程的平均成绩
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a1[i][j]>=av2[j])//该学生的第j门课成绩大于第j门课的平均值
                    x=1;//变成1
                else {
                    x=0;//一旦有一门课不是这样，就变成0，推出循环
                    break;
                }
            }
            if(x==1)
                y++;//增加一
        }
        for(int i=0; i<n; i++) {
            if(i==n-1)
                printf("%.2lf\n",av1[i]);
            else
                printf("%.2lf ",av1[i]);
        }
        for(int j=0; j<m; j++) {
            if(j==m-1)
                printf("%.2lf\n",av2[j]);
            else
                printf("%.2lf ",av2[j]);
 
        }
        printf("%d\n",y);
        printf("\n");
    }
    return 0;
}