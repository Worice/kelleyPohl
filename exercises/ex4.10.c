/* Exercise 4.10 Tempesta */

#include<stdio.h>
#include<stdlib.h>
#define N 3
int magic(int [N][N], int);


/* MAIN */

int main(){
	int square[N][N] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};

	if(magic(square, N))
		printf("Magic!\n");
	else
		printf("Sad\n");

	return 0;
}

/* AUX */

int magic(int a[N][N], int dim){
	int k, answer;
	int i, j;
	int s1, s2;

	k = 0; s1 = 0;
	for(i = 0; i < dim; i++){
		k += a[i][i];
		s1 += a[i][dim - 1 - i];
	}

	answer = (s1 == k);

	i = 0;
	while(i < dim && answer){
		j = 0;
		s1 = 0;
		s2 = 0;
		for(j = 0; j < dim; j++){
			s1 += a[i][j];
			s2 += a[j][i];
		}
		if(s1 != s2 || s1 != k)
			answer = 0;
		
		i = i + 1;
		
	}
	return answer;
}





