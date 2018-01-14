/* Algoritmo Bubblesort, ordina un array con una funzione swap. Tempo = n^2 */

#include"swap.h"

void bubblesort(int *, int);

void bubblesort(int *p, int dim){
	int i, j;
	for(i = 0; i < dim; i++)
		for(j = dim - 1; j > i; --j)
			if(*(p + j) < *(p + j - 1))
				swap((p + j), (p + j - 1));
}
