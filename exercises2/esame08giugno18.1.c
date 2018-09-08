/* Esame 08 giugno 2018, eserecizio 1 */

#include<stdio.h>
#include<stdlib.h>
#define DIM 3

void print_multi(int a[][DIM], int);

int main(){

	int a[DIM][DIM] = {{0, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	print_multi(a, DIM);

	int simpatico(int a[][DIM], int dim){
		int i, j, temp1 = 0, temp2 = 0;
		for(i = 0; i < dim; ++i)
			temp1 += a[i][i];
		for(i = 0; i < dim; ++i)
			temp2 += a[i][dim - 1 - i];

		return temp1 == temp2; 
	}

	printf("Simpatico: %s\n", simpatico(a, DIM) == 1 ? "si!" : "no!");

	return 0;
}

void print_multi(int a[][DIM], int end){
	int j, i;
	for(i = 0; i < end; ++i){
		for(j = 0; j < end; ++j)
			printf("| %d |", a[i][j]);
		printf("\n");
	}
}

