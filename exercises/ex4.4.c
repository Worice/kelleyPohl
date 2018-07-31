/* Esercizio Tempesta 4.4 */

#include<stdio.h>
#include<stdlib.h>
int intersection(int *, int, int *, int, int **, int *);
void print_array(int **, int *);

/* MAIN */

int main(){
	int aa[5] = {1, 2, 3, 4, 5};
	int bb[6] = {6, 7, 8, 9, 0, 10};
	int *cc;
	int sa = 5, sb = 0, sc;
	int *pc = &sc;
	intersection(aa, 5, bb, 6, &cc, pc);
	print_array(&cc, pc);
	return 0;
}

/* AUX */
int intersection(int *a, int size_a, int *b, int size_b, int **cc, int *size_c){
	char *common;
	int i, j;
	
	if(size_a == 0 || size_b == 0){
		*cc = NULL;
		*size_c = 0;
		return 1;
	}

	common = calloc(size_a, sizeof(char));
	if(common == NULL)
		return 0;
	*size_c = 0;
	
	for(i = 0; i < size_a; i++){
		j = 0;
		while(j < size_b && b[j] != a[i])
			j++;
		if(j < size_b){
			common[i] = 1;
			(*size_c)++;
		}
	}
	if(*size_c == 0)
		*cc = NULL;
	else{
		*cc = malloc(*size_c * sizeof(int));
		if(*cc == NULL){
			free(common);
			return 0;
		}
		j = 0;
		for(i = 0; i < size_a; i++)
			if(common[i] == 1){
				(*cc)[j] = a[i];
				j++;
			}
	}
	free(common);

		return 1;
}

void print_array(int **p, int *rec){
	if(*rec == 0)
		printf("\n");
	else{
		printf("%d ", **p);
		print_array(*(p + 1), rec - 1);
	}
}
			
