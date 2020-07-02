#include <stdio.h>

int main()
{
    int n, i, m, x[101];
    
    while (scanf("%d%d", &n, &m)!=EOF)
    {
        if((n==0)){
            break;
        }
        for (i = 0 ; i < n ; i++)
            scanf("%d", &x[i]);
        for (i = n ; i && x[i - 1] > m ; i--)
            x[i] = x[i - 1];
        x[i] = m;
        for (i = 0 ; i < n  ; i++){
            printf("%d ",x[i]);
        }
          printf("%d\n",x[n]);
    }


}
			
				