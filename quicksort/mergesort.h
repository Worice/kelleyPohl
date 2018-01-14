/* Algoritmo mergesort. Ordina un array di lunghezza n^2 a partire dalle coppie, quindi ordinerà gruppi di 4, 8u, 16 e così via */

void mergesort(int *, int);

void mergesort(int *a, int dim){

	int m, j, k, *w;

	for(m = 1; m < dim; m *= 2);

	if(m > dim){
		printf("\nError. Array length not power of 2. Bye!\n");
		exit(1);
	}

	w = calloc(m, sizeof(int));
	assert(w != NULL);

	for(k = 1; k < dim; k *= 2){
		for(j = 0; j < dim - k; j += 2 * k){
			merge(&a[j], &a[j + k], w + j, k, k);
		}		
		for(j = 0; j < dim; j++)
			*(a + j) = w[j];
		
	}
	free(w);

}
