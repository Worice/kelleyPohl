/* Exercise Tempesta 4.5 */

#include<stdio.h>
#include<stdlib.h>
#define DIMa 5
#define DIMb 4

void print_array(int *, int, int);
void print_string(char *);
int array_union(int *, int, int *, int, int **, int *);
/* MAIN */

int main(){
	int a[DIMa] = {1, 3, 5, 7, 9};
	int b[DIMb] = {2, 4, 6, 8};
	int *c;
	int dime;
	int *dimc = &dime;
	array_union(a, DIMa, b, DIMb, &c, dimc);
	printf("hello\n");
	printf("%d\n", c[0]);
	print_array(c, 0, dime);
	return 0;
}


/* AUX */

int array_union(int *a, int dima, int *b, int dimb, int **c, int *dimc){
	int *commons;
	int dimcommons;
	int i, j;

	if(dima == 0 && dimb == 0){
		*c = NULL;
		*dimc = 0;
		return 1;
	}

	commons = NULL;
	dimcommons = 0;

	if(dimb != 0){
		commons = calloc(dimb, sizeof(int));
		if(commons == NULL)
			return 0;
		for(i = 0; i < dimb; i++){
			j = 0;
			while(j < dima && a[j] != b[i])
				j++;
			if(j < dima){
				commons[i] = 1;
				dimcommons++;
			}
		}
		print_array(commons, 0, dimb);
	}
	*dimc = dima + dimb - dimcommons;
	printf("%d\n", *dimc);
	if(*c == NULL){
		free(commons);
		return 0;
	}
	for(i = 0; i < dima; ++i)
		(*c)[i] = a[i];
	for(j = 0; j < dimb; ++j)
		if(commons[j] == 0){
			(*c)[i] = b[j];
			++i;
		}
	free(commons);

	return 1;

}




void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("%d ", a[start]);
		print_array(a, ++start, end);
	}
}

void print_string(char *c){
	if(*c == '\0')
		printf("\n");
	else{
		printf("%c ", c[0]);
		print_string(c + 1);
	}
}

