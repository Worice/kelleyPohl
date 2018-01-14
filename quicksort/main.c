/* Implementazione algoritmo di ordinamento quicksort, da Kelley & Pohl, capitolo 6. */

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"merge.h"
#include"print_array_int.h"
#include"mergesort.h"

int main(int argc, char *argv[]){

	FILE *a; 
	int dim, i;
	int *w; 	/*n è un numero importato dal testo*/

	sscanf(argv[1], "%d", &dim);
	a 	= fopen(argv[2], "r");	
	
	w = malloc(dim * sizeof(dim));

	/* print_array_int(w, dim); */


	for(i = 0; i < dim; i++)
		fscanf(a, "%d", &w[i]);

	fclose(a);

	mergesort(w, dim);
	
/*	print_array_int(w, dim);*/

	free(w);

	return 0;
}
