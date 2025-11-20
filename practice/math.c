#include<stdio.h>

int	add(int *x, int *y)
{
	return (*x + *y);
}

int main ()
{
	int a = 4;
	int b = 8;
	int c = add(&a,&b);

	printf("%d\n",c);
}
