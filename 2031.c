
#include<stdio.h>
#include<math.h>
int main()
{
    int N, R;
    while (scanf("%d %d", &N, &R)!=EOF)
    {
        int num, i = 0, c[100000];
        for (int num = abs(N); num != 0; ++i)//使用abs函数，用于取得数的绝对值
        {            
            c[i] = num % R;//将余数保存在整形数组中
            num =num/ R;//将上次循环中的数据取整，并保留，用做下次循环时使用
        }
        if (N < 0)//当输入的数是负数时，需要输出负号
            printf("-");
        for (int j = i-1; j >= 0; --j)//因为整型数组中存储的余数中可能会有‘10’，‘11’，‘12’，‘13’，‘14’，‘15’，将其转换成对应的字符。
        {//注意此处需要减一，根据for循环的原则 需要注意，可以自己测试一下
            if (c[j] == 10)
                printf("A");
            else if (c[j] == 11)
                printf("B");
            else if (c[j] == 12)
                printf("C");
            else if (c[j] == 13)
                printf("D");
            else if (c[j] == 14)
                printf("E");
            else if (c[j] == 15)
                printf("F");
            else 
                printf("%d", c[j]);
        }//注意else if的使用，else和最近的（也就是第一个）if搭配，elseifmen都是一个整体
        printf("\n");
    }
    return 0;
}