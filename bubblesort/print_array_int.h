/* Function that print on standard output the content of an array. */

void print_array_int(int *, int);

void print_array_int(int *p, int dim){
	int i;
	for(i = 0; i < dim; ++i){	
		if(i % 10 == 0)
			printf("\n");
		printf("%10d", *(p + i));
	}
	printf("\n");
}
