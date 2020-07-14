#include <stdio.h>
#include <string.h>
int main() {
    char s[10000];
    while (scanf("%s", s) != EOF) {
        
        if (strcmp(s, "0") == 0) {
            break;
        }
        int flag = 10;
        while (flag >= 10) {
            flag = 0;
            for (int i = 0; s[i] != 0; i++) {
                flag += s[i] - '0';
            }
            sprintf(s, "%d", flag);//把整数flag，搞成字符串，放到s里
        }
        printf("%d\n", flag);
    }


}