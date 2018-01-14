/* Esercizio 6.15 */

#include<stdio.h>
void swap(int *, int *);
void print_array_int(int *, int, int);
void merge(int *, int *, int *, int, int);
void bubble_sort(int *, int);

int main(){
	int a[3] = {3, 2, 9}, b[4] = {8, 6, 5, 1}, c[7];
	int i, j;
	merge(a, b, c, 3, 4);
	print_array_int(c, 0, 7);
	bubble_sort(c, 7);
	print_array_int(c, 0, 7);
}



/*         AUX 		*/

void swap(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void print_array_int(int *p, int start, int dim ){
	if(start >= dim){
		printf("\n\n");
		return;
	}
	printf("p[%d] = %d\n", start, *(p + start));
	print_array_int(p, start + 1, dim);
}

void merge(int *a, int *b, int *c, int dima, int dimb){
	int i, j, dimc = dima + dimb;
	for(i = 0; i < dima; ++i)
		*(c + i) = *(a + i);
	for(i = dima, j = 0; i < dimc, j < dimb; ++i, ++j)
		*(c + i) = *(b + j);
}

void bubble_sort(int *a, int dim){
	int i, j;
	for(i = 0; i < dim - 1; ++i)
		for(j = dim - 1; j > i; --j)
			if(a[j - 1] > a[j])
				swap(&a[j - 1], &a[j]);
			else
				return;
}

