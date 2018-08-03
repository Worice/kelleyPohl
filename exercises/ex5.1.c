/* Esercizio Tempesta 5.1 */

#include<stdio.h>
#include<stdlib.h>

#define N 4

int tictac(int [N][N]);
void print_matrix(int [N][N], int, int);

/* MAIN */

int main(){
	int board[N][N] = {{2, 1, 1, 1}, {1, 2, 2, 2}, {1, 2, 2, 2}, {1, 2, 1, 2}};
	print_matrix(board, N, N);

	printf("Between player 1 and 2, player %d wins!\n", tictac(board));
	
	return 0;
}


/* AUX */

int tictac(int m[N][N]){
	int i, j, counter;
	for(i = 0; i < N; ++i){
		counter = 0;
		for(j = 0; j < N; ++j)
			counter += m[i][j];
			
		if(counter == 8)
			return 2;
		else if(counter == 4)
			return 1;

		counter = 0;
		
		for(j = 0; j < N; ++j)
			counter += m[j][i];

		if(counter == 8)
			return 2;
		else if(counter == 4)				
			return 1;
	}

	counter = 0;
	
	for(i = 0; i < N; ++i)
		counter += m[i][i];
	
	if(counter == 8)
		return 2;
	else if(counter == 4)
		return 1;
	
	counter = 0;


	for(i = 0; i < N; ++i)
		counter += m[i][N - i - 1];

	if(counter == 8)
		return 2;
	else if(counter == 4)
		return 1;
	

	return 0;
}

void print_matrix(int m[N][N], int start, int end){
	int i, j;
	for(i = 0; i < N; ++i){
		printf("\n");
		for(j = 0; j < N; ++j)
			printf("%d ", m[i][j]);
	}
	printf("\n\n");
}



















