#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int i, n;
    int f[100], m;
    
    while (scanf("%d", &n), n)//就是当输入一个整型，且这个整型的数不是0时，条件成立，否则，若输入0，则跳过while里面的内容。
    {
        m = 0;
        for (i = 0 ; i < n ; i++)
        {
            scanf("%d", &f[i]);
            if (f[i] < f[m]) m = i;
        }
        swap(f[m], f[0]);
        for (i = 0 ; i < n ; i++)
            printf("%d%c", f[i], (i < n - 1 ? ' ' : '\n'));
    }
    
   
}
			
				