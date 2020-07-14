#include<stdio.h>
#include<algorithm>
using namespace std;
int main() {
    int n,m,a[120],b[120],c[120],l,k;
    while(scanf("%d %d",&n,&m)&&n!=0||m!=0) {
        int u=0,v=0;
        for(l=0; l<n; l++)
            scanf("%d",&a[l]);
        for(l=0; l<m; l++)
            scanf("%d",&b[l]);

        for(l=0; l<n; l++) {
            for(k=0; k<m; k++)
                if(a[l]==b[k])
                    u=1;
            if(u==0) {
                c[v]=a[l];
                v++;
            }
            u=0;
        }
        sort(c,c+v);
        if(v==0)
            printf("NULL");
        else
            for(l=0; l<v; l++)
                printf("%d ",c[l]);
        printf("\n");
    }
    return 0;
}