/* Esame  agosto , esercizio 3 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 3

int main(){
	int a[DIM][DIM] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	void convert(int a[DIM][DIM], int **b){
		*b = (int *) malloc((DIM * DIM) * sizeof(int));
		int i, j, k;
		for(i = 0; i < DIM, k < DIM * DIM; ++i, ++k)
			for(j = 0; j < DIM, k < DIM * DIM; ++j, ++k)
				(*b)[k] = a[i][j];
	}

	int *b;

	convert(a, &b);

	int i;
	for(i = 0; i < DIM * DIM; ++i)
		printf("| %d |", b[i]);

	return 0;
}
