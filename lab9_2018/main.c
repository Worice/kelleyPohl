/* Esercitazione di laboratorio 9 2018 */

#include <stdio.h>
#include <stdlib.h>
#include "es9.h"

int verifica_riga(int campo[][DIM], int);
int verifica_colonna(int campo[][DIM], int);
int verifica_riquadro(int campo[][DIM], int, int);
int verifica_campo(int campo[][DIM]);

int main(){
	printf("%d\n", verifica_riga(campo1, 3));
	printf("%d\n", verifica_colonna(campo1, -2));
	printf("%d\n", verifica_riquadro(campo1, 0, 0));
	printf("%d\n", verifica_campo(campo1));

	return 0;
}

/* AUX */

int verifica_riga(int campo[][DIM], int riga){
	int j; int k = 1;
	int flag = 9; int match = 0;
	while(k <= 9){
		for(j = 0; j < DIM; ++j)
			match += campo[riga][j] == k;
		++k;
	}
	return (flag == match);
}

int verifica_colonna(int campo[][DIM], int colonna){
	int j; int k = 1;
	int flag = 9; int match = 0;
	while(k <= 9){
		for(j = 0; j < DIM; ++j)
			match += campo[j][colonna] == k;
		++k;
	}
	return (flag == match);
}

int verifica_riquadro(int campo[][DIM], int riga, int colonna){
	int match = 0, flag = 9, k = 1;
	int i, j;
	if(riga <= 6 && colonna <= 6){ 
		while(k <= 9){
			for(i = 0; i < 3; ++i)
				for(j = 0; j < 3; ++j)
					match += campo[riga + i][colonna + j] == k;
			++k;
		}

		return (match == flag);
	}
	else
		return 0;
}

int verifica_campo(int campo[][DIM]){
	int flag = 67, match = 0;
	for(int i = 0; i < DIM; ++i)
		match += verifica_colonna(campo, i);
	for(int i = 0; i < DIM; ++i)
		match += verifica_colonna(campo, i);
	for(int i = 0; i < 7; ++i)
		for(int j = 0; j < 7; ++j)
			match += verifica_riquadro(campo, i, j);
	return(flag == match);
}

	









