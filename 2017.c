#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int n, d;
    char c;

    scanf("%d%*c", &n);//%*c  即 吞掉一个字符，不赋值给任何
    while (n--)
    {
        for (d = 0 ; (c = getchar()) != '\n' ;)
        {
            if (isdigit(c)) d++;
        }
        printf("%d\n", d);
    }

    return 0;
}