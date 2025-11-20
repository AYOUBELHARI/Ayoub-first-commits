#include<stdio.h>

float	madtousd(float mad)
{
	float usd;
	usd = mad * 0.11;
	return usd;
}

int main()
{
	float a;
	float b;

	printf("mad : ");
	scanf("%f", &a);
	b = madtousd(a);
	printf("it's : %0.1f usd\n", b);
}
