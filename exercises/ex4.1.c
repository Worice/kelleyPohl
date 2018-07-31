/* Esercizi Tempesta 4.1 */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int remove_duplicate(int *, int, int **, int *);
void print_array(int *, int);
/* MAIN */

int main(){
	int a[SIZE] = {1, 2, 3, 3, 4};
	print_array(a, SIZE);
	int *b;
	int size_b;
	
	if(remove_duplicate(a, SIZE, &b, &size_b)){
		int i;
		for(i = 0; i < size_b; i++)
			printf(" %d ", b[i]);
	}

	free(b);

	return 0;
}

/* AUX */

int remove_duplicate(int *array, int size, int **new_array, int *new_size){
	int i;
	for(i = 1; i < size; i++){
		if(array[i] != array[i - 1])
			(*new_size)++;
	}
	*new_array = (int *) malloc (sizeof (int) * (*new_size));
	if (*new_array){
		int j = 1;
		(*new_array)[0] = array[0];
		for(i = 1; i < size; i++){
			if(array[i] != array[i - 1]){
				(*new_array)[j] = array[i];
				++j;
			}
		}
		return 1;
	}
	else
		return 0;
}

void print_array(int *a, int size){
	if(size == 0)
		printf("\n");
	else{
		printf("%d ", a[0]);
		print_array(a + 1, --size);
	}
}
