#include <math.h>
#include <stdio.h>
/*首先明确  什么是闰年？

1、能被4整除，但不能被100整除；

2、能被400整除；*/



int main()
{
    int y, m, d, i, s;
    int month[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    while (scanf("%d/%d/%d", &y, &m, &d) != EOF)
    {   
        if((y%4==0&&y%100!=0)||y%400==0){

            for(s=0,i=0;i<m;i++){
                s=s+month[1][i];
            }
            s=s+d;
            printf("%d\n",s);
        }
        else
        {
              for(s=0,i=0;i<m;i++){
                s=s+month[0][i];
            }
            s=s+d;
            printf("%d\n",s);
        }
        
    }

    return 0;
}
			
				