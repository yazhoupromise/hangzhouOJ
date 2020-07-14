#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int n, flag, i;
    char sym[1000];

    scanf("%d%*c", &n);
    while (n--)
    {
        gets(sym);
        if (sym[0] != '_' && !isalpha(sym[0]))
        {
            puts("no");
            continue;
        }
        for (flag = i = 1 ; sym[i] ; i++)
        {
            if (!isalnum(sym[i]) && sym[i] != '_')
            {
                flag = 0;
                break;
            }
        }
        puts(flag ? "yes" : "no");
    }

    return 0;
}
			
				