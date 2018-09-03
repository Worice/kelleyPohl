/* Exercise 4.3.07.c Tempesta. Eliminate duplicates in non ordered array */

#include<stdio.h>
#include<stdlib.h>
#define DIM 15 

void print_array(int *, int, int);

/* MAIN */

int main(){
	int a[DIM] = {1, 5, 2, 5, 5, 3, 2, 3, 1, 9, 1, 1, 2, 2, 17};
	print_array(a, 0, DIM);

	void delete_duplicate(int *in, int end, int **out){
		int *temp = (int *) malloc(end * sizeof(int));
		int i, j, uniques = 0;
		for(i = 0; i < DIM; ++i){
			temp[i] = in[0];
			printf("| %d |", temp[i]);
		}
		printf("\n");
		int unique;

		for(i = 1; i < end; ++i){
			for(j = 0, unique = 1; unique && j < end; ++j)
				if(in[i] == temp[j]){
					unique = 0;
				}
			if(unique){
				++uniques;
				temp[uniques] = in[i];
			}
		}			
		print_array(temp, 0, DIM);
		printf("uniques: %d\n", uniques);

		*out = (int *) malloc((uniques + 1) * sizeof(int));
		for(i = 0; i <= uniques; ++i){
			(*out)[i] = temp[i];
			printf("| %d |", (*out)[i]);
		}
		printf("\n");
	}

	int *b;
	delete_duplicate(a, DIM, &b);
	
	
	return 0;
}

/* AUX */

void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("| %d |", a[start]);
		print_array(a, ++start, end);
	}
}

							
