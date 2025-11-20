#include <stdio.h>

int main (){
	char str[128];

	scanf("%[^\n]s", str);
	printf("%s\n", str);
	return 0;
}
