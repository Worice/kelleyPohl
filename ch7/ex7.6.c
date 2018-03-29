/* Ex. 7.6
 * Write a function that extract a bit from a choosen position from a 32 bit expression.
 * NOTE: I did not get exactly what the excercise required, hence I cretively interpreted it :)
 *
 */

#include<stdio.h>
#define DIM 32
void get_inputs(int *, int *);
void shift_mask(int *, int *);
void bit_print(int *, int);
void bit_extract(int *, int *, int, void f(int *, int));

/* MAIN */

int main(){
	int input = 0, shift = 0, mask = 1;
	get_inputs(&input, &shift);
	shift_mask(&shift, &mask);
	bit_print(&input, DIM);
	bit_extract(&input, &mask, DIM, bit_print);	
	return 0;
}

/* AUX */

void get_inputs(int *n, int *m){
	printf("\nChoose an integer as expression:\n");
	scanf("%d", n);
	printf("\nChoose the nth bit to extract:\n");
	scanf("%d", m);
}
void shift_mask(int *shift, int *mask){
	*mask <<= *shift;
}

void bit_print(int *m, int rec){
	int mask = 1;
	mask <<= (rec - 1);
	if(rec > 0){
		if(rec % 4 == 0)
			printf(" ");
		printf("%c", ((*m & mask) == 0) ? '0' : '1');
		mask >>= 1;
		bit_print(m, rec - 1);
	}
	else
		printf("\n");
}

void bit_extract(int *input, int *mask, int rec, void f(int *n, int)){
	int output = 0;
	output = *input & *mask;
	printf("\nAt position %d, corresponding to the mask :\n", *input);
	f(mask, rec);
	if(!output)
		printf("there is no information to extract!\n");
	else
		printf("there is information to extract!\n");
	
}
		
		



















	
