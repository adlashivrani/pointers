#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
//for integer elements sorting
int *sort(int *ptr, int n);
int main() 
{
	int *ptr;
	int n;
	printf("\nEnter the num of elements to ptr:\n");
	scanf("%d", &n);
	int temp;
	ptr = (int *) malloc ( SIZE * sizeof(int));
	printf("\nEnter the elements of array\n");
	for (int i = 0;i < n; i++) {
		scanf("%d", (ptr + i));
	}
	sort(ptr, n);
	for (int i = 0;i < n; i++) {
          printf("%d ", *(ptr + i));
     }
     free(ptr);
     ptr = NULL;
     return 0;
}
int *sort(int *ptr, int n) 
{
	int temp;
	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j <= i; j++) {
			if (*( ptr + i) < *(ptr + j) ) {
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
	return ptr;
}
