
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, len, i;
	char s[1024];
	
	scanf("%d%*c", &n);
	
	while (n--)
	{
		gets(s);
		len = strlen(s);
		for (i = 0; i <= len / 2; i++)
		{
			if (s[i] != s[len - 1 - i])
				break;
		}
		puts(s[i] != s[len - 1 - i] ? "no" : "yes");
	}
	
	return 0;
}
