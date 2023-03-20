#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
char** sort(char**, int);
int main()
{
        int n;
        printf("Enter how many names you want");
        scanf("%d", &n);
		__fpurge(stdin);
        char **ptr = (char**) malloc(SIZE * sizeof(char*));
        for (int i = 0; i < SIZE; i++) {
                *(ptr +i) = (char*) malloc (SIZE * sizeof(char));
        }
           printf("Enter the names:");
        for ( int i = 0; i < n; i++) {
            fgets(*(ptr + i), SIZE, stdin);
        }
        for( int i = 0; i < n; i++) {
            *(*(ptr +i) + (strlen(*(ptr + i)) -1)) ='\0';
        }
        sort(ptr, n);
        printf("Sorted names:\n");
        for (int i = 0; i <= n; i++) {
            printf("%s ", *(ptr + i));
        }
        printf("\n");
        for(int i = 0; i < n; i++) {
            free(*(ptr + i));
        }	
        return 0;
}
char** sort(char **ptr, int n)
{
        char *temp;
        for (int i = 0; i < n; i++) {
			for ( int j = i + 1; j < n; j++) {
                        if (*ptr[i]> *ptr[j]) {
                                temp = ptr[i];
                                ptr[i] = ptr[j];
                                ptr[j] = temp;
                        }
					}
                }
        /*for ( int i = 0; i < n; i++) {
                for ( int j = i + 1; j < n; j++) {
                        if (strcmp(*(ptr + i),*(ptr + j)) > 0) {
                                strcpy(*temp, *(ptr + i));
                                strcpy(*(ptr + i), *(ptr + j));
                                strcpy(*(ptr + j), *temp);
                                }
                        }
                }*/
                /*printf("Sorted names:\n");
        for (int i = 0; i < n; i++) {
                  printf("%s ", *(ptr + i));
              }
         printf("\n");*/
        return ptr;
}
