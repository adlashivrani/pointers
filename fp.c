#include <stdio.h>

void fun(int, int);

int main()
{
	int a = 10;
	int b = 20;
	void (*fp)(int , int ) = &fun;
	(*fp)(a, b);
	return 0;
}

void fun(int a, int b)
{
	printf(" op: %d\n", a + b);
}
