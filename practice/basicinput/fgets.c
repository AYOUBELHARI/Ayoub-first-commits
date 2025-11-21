#include <stdio.h>
#include <string.h>

int main (){
	char str[20];

	printf("What day is it ?\n");
	fgets(str, sizeof(str), stdin);
	printf("So it's %s\n", str);
	return 0;
}
