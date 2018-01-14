/* Il programma genera un array dinamicamente, su input dell'utente. Quindi lo popola di valori casuali generati e poi li ordina */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"print_array_int.h"
#include"bubblesort.h"


int main(int argc, char *argv[]){
	int *a, i, dim;
	FILE *input;

	input = fopen(argv[2], "r");
	sscanf(argv[1], "%d", &dim);
	a = malloc(dim * sizeof(int));

/*	print_array_int(a, dim);*/

	for(i = 0; i < dim; i++)
		fscanf(input, "%d", &a[i]);
	fclose(input);
	
	bubblesort(a, dim);

/*	print_array_int(a, dim);	stampe commentate per misurazione prestazioni */
	
	free(a);

	return 0;
}	


	

