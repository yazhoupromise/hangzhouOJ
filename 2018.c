#include<stdio.h>//感觉题目有问题，阅读理解有问题？
int main()
{
    int n,i,a[55];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        a[1]=1;
        a[2]=2;
        a[3]=3;
        a[4]=4;
        for(i=5;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-3];
        }
        printf("%d\n",a[n]);
    }
}
