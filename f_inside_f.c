#include<stdio.h>

void func1(void (*ptr)());
void func2();

int main()
{
	func1(func2);
	return 0;
}

void func1(void (*ptr)())
{
	(*ptr)();
	printf("\nFunction 1 called...\n");
	//(*ptr)();
}

void func2()
{
	printf("\nFUnction 2 called...\n");
}
