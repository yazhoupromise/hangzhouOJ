#include <stdio.h>

int main()
{
  int m, n, i, x, y;

    while (scanf("%d%d", &m, &n) != EOF)
    {
        if (m > n)//保证m大于n，如果不是的话，就换一下
        {
            i = n;
            n = m;
            m = i;
        }
        x = y = 0;
        for (i = m ; i <= n ; i++)
            (i & 1) ? (y += i*i*i) : (x += i*i);//所以，奇数与1作与运算，结果肯定是1
        printf("%d %d\n", x, y);
    }

    return 0;
}