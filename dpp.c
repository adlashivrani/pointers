#include<stdlib.h> 
#include<stdio.h> 
int main() 
{ 
int **p,i,j; 
int row = 5,col = 4; 
p = (int **) malloc(row*sizeof(int *)); 
for(i=0;i<5;i++) 
	p[i] = (int *) malloc(col*sizeof(int)); 
/*assigning and printing 2d array*/ 
for(i=0;i<5;i++){ 
	for(j=0;j<5;j++){ 
		p[i][j] = i+j; 
		printf("%d ",p[i][j]); 
	} 
	printf("\n"); 
} 
} 
