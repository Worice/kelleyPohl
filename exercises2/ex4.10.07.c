/* 4.10 Magic square
A magic square is a N × N matrix in which every line sums to the same value K, every column
sums to K and the main and secondary diagonals sum to K. is a magic square and K = 15. Write a program that for a certain N decides if the matrix is a magic
square. */


#include<stdio.h>
#include<stdlib.h>
#define DIM 3

int magic(int [][DIM]);

/* MAIN */

int main(){
	int a[DIM][DIM] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
	printf("The square is %smagic!\n", magic(a) == 1 ? "" : "not ");
	return 0;
}

/* AUX */

int magic(int a[][DIM]){
	int i, j, div = 0;
	int sum = 0;
		
	for(i = 0; i < DIM; ++i, ++div)
		for(j = 0; j < DIM; ++j)
			sum += a[i][j];

	for(i = 0; i < DIM; ++i, ++div)
		for(j = 0; j < DIM; ++j)
			sum += a[j][i];

	for(i = 0; i < DIM; ++i, ++div)
		sum += a[i][i];

	for(i = 0; i < DIM; ++i, ++div)
		sum += a[DIM - 1 - i][i];

	printf("sum = %d\n", sum);
	printf("div = %d\n", div);

	return sum % div == 0;
}
	












