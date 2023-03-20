#include<stdio.h> 
void main () {
 	int n = 20;
 	int *pr;
 	int **pr1;
 	printf("\nThe address of the variable n is: %x\n", &n);
 	pr = &n;
 	printf("\nThe address of variable n stored in single pointer is: %x\n",pr);
 	pr1 = &pr;
 	printf("\nThe address of pointer pr stored in double pointer is: %x\n",pr1);
 	printf("\nThe address of double pointer pr1 is: %x\n", &pr1);
 	printf("\nThe value stored at pointer pr: %d\n",*pr);
 	printf("\nThe value stored at another pointer pr1: %d\n",**pr1); 
}
