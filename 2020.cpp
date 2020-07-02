#include<algorithm>
#include <stdio.h>
#include<cmath>
using namespace std;
bool cmp(int a,int b){

    return abs(a)>abs(b);
}



int main()
{
    int n, i, x[101];
    
    while (scanf("%d", &n), n)
    {
        for (i = 0 ; i < n ; i++)
            scanf("%d", &x[i]);
        
        sort(x,x+n,cmp);
        for (i = 0 ; i < n-1 ; i++)
           {printf("%d ",x[i]);}
           printf("%d\n",x[i]);
    }

    return 0;
}
			
		