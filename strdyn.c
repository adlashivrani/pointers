#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
	char **ptr = (char**) malloc (SIZE * sizeof(char*));
	for (int i = 0; i < SIZE; i++)
	{
		*(ptr +i) = (char*) malloc ( SIZE * sizeof(char));
	}
	for ( int i = 0; i < 3; i++) {
		fgets(*(ptr + i), SIZE, stdin);
	}
	/*ptr[0] = "Hello";
	ptr[1] = "world";
	ptr[2] = "Hii";*/
	printf("\nEnter names:\n");
	for ( int i = 0; i < 2; i++) {
		printf("%c ", *(*(ptr + i) + 1));
	}
	return 0;
}
