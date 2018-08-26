/* Exercise 4.5 Tempesta */

#include<stdio.h>
#include<stdlib.h>

void print_array(int *, int, int);
int unify_array(int *, int, int *, int, int **, int *);
/* MAIN */

int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int sa = 5;
	int b[4] = {11, 2, 3, 44};
	int sb = 4;
	int *c;
	int *sc;
	print_array(a, 0, sa);
	unify_array(a, sa, b, sb, &c, sc);

	return 0;
}

/* AUX */

int unify_array(int *a, int dima, int *b, int dimb, int **c, int *dimc){
	int *commons;
	int dimcommons = 0;
	int i, j;

	if(dima == 0 && dimb == 0){
		*c = NULL;
		*dimc = 0;
		return 1;
	}
	commons = NULL;
	dimcommons = 0;


	if(dimb != 0){
		printf("Hello\n");
		commons = calloc(dimb, sizeof(int));
		printf("Hello1\n");
		if(commons = NULL)
			return 0;
		printf("Hello2\n");
		for(i = 0; i < dimb; i++){
			j = 0;
			printf("Hello3\n");
			while(j < dima && a[j] != b[i])
				++j;
				printf("Hello4\n");
			if(j < dima){
				printf("Hello5\n");
				commons[i] = 1;
				dimcommons++;
			}
			printf("Hello6\n");
		}

	}
	printf("Ripetizioni = %d\n", dimcommons);
	print_array(commons, 0, dimb);
	printf("Ripetizioni = %d\n", dimcommons);

	*dimc = dima + dimb - dimcommons;
	for(i = 0; i < dima; ++i);

}



void print_array(int *a, int lb, int ub){
	if(lb == ub)
		printf("\n");
	else{
		printf("%d ", a[lb]);
		print_array(a, lb + 1, ub);
	}
}




