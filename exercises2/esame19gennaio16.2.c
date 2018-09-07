/* Esame 19 gennaio 2016 esercizio 2 */

#include<stdio.h>
#include<stdlib.h>
#define DIM1 3


int main(){
	char *s[DIM1] = {"Sono", "molto", "bello"};
	char *ss;
	int concatena(char **out, char *vet[], int size){
		int lenght = 0;
		int i, j;

		for(i = 0; i < size; ++i){
			for(j = 0; vet[i][j] != '\0'; ++j){
				++lenght;
			}
		}
		printf("lenght = %d\n", lenght);
		*out = (char *) malloc(lenght * sizeof(char));
		
		int k = 0;

		for(i = 0; i < size && k <= lenght; ++i){
			for(j = 0; vet[i][j] && k <= lenght; ++j, ++k){
				(*out)[k] = vet[i][j];
			}
		}
		out[lenght] = '\0';
		return lenght;
	}

	int size = concatena(&ss, s, DIM1);

	int j;
	for(j = 0; j < size; ++j)
		printf("| %c |", ss[j]);

	printf("\n");

	return 0;
}
