
				
#include <stdio.h>

int main()
{
    int n, i, a, b, c;
    double x;

    while (scanf("%d", &n) , n)//逗号表达式，它的值是逗号后面的那个值，即n

    //注意 若y=(5,6)；//那么y=6,因为逗号表达式的优先级比赋值运算还低，所以如果写成y=5,6的话y还是等于5的
    {
        a = b = c = 0;
        for (i = 0 ; i < n ; i++)
        {
            scanf("%lf", &x);
            if (x > 0) c++;
            else if (x < 0) a++;
            else b++;
        }
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}