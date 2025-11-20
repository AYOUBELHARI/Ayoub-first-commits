#include <stdio.h>

int	areaofT(int x, int y)
{
	return x * y;
}

int main()
{
	int a;
	int b;

	printf("length of T is : ");
	scanf("%d", &a);
	printf("width of T is : ");
	scanf("%d", &b);
	int area = areaofT(a, b);
	printf("%d\n", area);
}
