/*算法分析：

第一步：使用辗转相除法求出两个数的最大公约数a，而最小公倍数b=两数之积/最大公约数a，求出两个数的最小公倍数b

第二步：再用b与下一个数求最小公倍数

以此类推。

辗转相除法：用较小数除较大数，再用出现的余数（第一余数）去除除数，再用出现的余数（第二余数）去除第一余数，如此反复，直到最后余数是0为止。此时除数就是所求最大公约数。

注意：过程中，先乘后除可能过界，要先除再乘*/

#include<stdio.h>

typedef unsigned long UL;

UL gcd(UL u, UL v)
{
    int remainder;
    
    remainder = u % v;
    while(remainder)
    {
        u = v;
        v = remainder;
        remainder = u % v;
    }
    return v;
}

UL lcm(UL u, UL v)//求 最小公倍数
{
    return u * v / gcd(u, v);
}

int main(void)
{
    int n;
    UL u;
    UL res;
    
    while (scanf("%d", &n) != EOF)
    {
        res = 1;

        while (n--)
        {
            scanf("%lu", &u);
            res = lcm(res, u);
        }

        printf("%lu\n", res);
    }

    return 0;
}

			