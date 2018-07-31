/* Excercise 4.5 Tempesta */

#include<stdio.h>
#include<stdlib.h>
int array_union(int *, int, int *, int, int **, int *);
void print_array(int *, int, int);

/* MAIN */

int main(){
	int a[4] = {1, 2, 3, 4};
	int b[5] = {6, 7, 8, 9, 10};
	int *c;
	int da = 4, db = 5;
	int *dc;
	print_array(a, 0, 4);
	array_union(a, da, b, db, &c, dc);
	return 0;
}

/* AUX */

int array_union(int *a, int dima, int *b, int dimb, int **c, int *dimc){
	char *commons;
	int num_commons;
	int i, j;

	if(dima == 0 && dimb == 0){
		*c = NULL;
		*dimc = 0;
		return 1;
	}
	commons = NULL;
	num_commons = 0;

	if(dimb != 0){
		commons = calloc(dimb, sizeof(char));
		if(commons == NULL)
			return 0;
		for(i = 0; i < dima; i++){
			j = 0;
			while(j < dima && a[j] != b[i])
				j++;
			if(j < dima){
				commons[i] = 1;
				num_commons++;
			}
		}

		*dimc = dima + dimb - num_commons;
		*c = malloc(*dimc * sizeof(int));
		if(*c == NULL){
			free(commons);
			return 0;
		}

		for(i = 0; i < dima; i++)
			(*c)[i] = a[i];
		for(j = 0; j < dimb; j++)
			if(commons[j] == 0){
				(*c)[i] = b[j];
				i++;
			}
		free(commons);

		return 1;
	}
}

void print_array(int a[], int lb, int rec){
	if(lb < rec){
		printf("%d ", a[lb]);
		print_array(a, ++lb, rec);
	}
	else
		printf("\n");
}
