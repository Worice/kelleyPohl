/* Esercizio 6.16 */

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 	10
void sub_array_dims(int *, int);
void print_array_int(int *, int, int);
void merge(int *, int *, int *, int, int);
void merge_sort_evo(int *, int, int *);

/*********** MAIN *********************/

int main(){
	int a[N] = {0};				/* Holds sub arrays sizes */
	int b[N] = {9,8,7,6,5,4,3,2,1,0};
	sub_array_dims(a, N);
	print_array_int(a, 0, N);
	print_array_int(b, 0, N);
	printf("\n\nLes go:\n\n");
	merge_sort_evo(b, N, a);
	print_array_int(b, 0, N);
	return 0;
}

/**************** AUX *******************/

void sub_array_dims(int *p, int n){		/*Calculates sub array sizes 2^N*/
	int j = -1, sum = 1;
	for(int i = 0; sum <= n; i++){
		int mask = 1 << i;
		++j;
		if((n & mask) != 0){
			*(p + j) = mask;	
			sum += mask;
		}else
			j--;

	}	
}

void print_array_int(int *p, int start, int dim){ /*Print array*/
	if(start >= dim){
		printf("\n");
		return;
	}
	printf("p[%d] = %d\n", start, *(p + start));
	print_array_int(p, start + 1, dim);
}

void merge(int *a, int *b, int *c, int dima, int dimb){ /* Merge two ordered arrays */
	int i = 0, j = 0, k = 0;
	while(i < dima && j < dimb)
		if(a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	while(i < dima)
		c[k++] = a[i++];
	while(i < dimb)
		c[k++] = b[j++];
}

void merge_sort_evo(int *p, int n, int *sub){
	int *w;
	w = calloc(n, sizeof(int));
	assert(w != NULL);
	int i = 0, j, k, h;
	for(h = 0; h < n && sub[i] != 0; h += sub[i]){    /*h: goes through sub arrays */
		for(k = 1; k < sub[i]; k *= 2){
			for(j = 0; j < sub[i] - k; j += 2 * k)
				merge(&p[j + h], &p[j + k + h], &w[j + h], k, k);
			for(j = 0 + h; j < sub[i]; ++j)
		       		p[j] = w[j];
		}
		i++;
	}	
	free(w);
}


























