/* Ex 7.5
 * Revert machine repsentation of a number
 */

#include<stdio.h>
#define DIM 32
void get_input(unsigned int *);
void bit_print(unsigned int *, unsigned int);
void bit_revert(unsigned int *, unsigned int *, unsigned int);

/* MAIN */

int main(){
	unsigned int input = 0, output = 0;
	get_input(&input);
	bit_print(&input, DIM);
	bit_revert(&input, &output, DIM);
	bit_print(&output, DIM);
	return 0;
}

/* AUX */

void get_input(unsigned int *n){
	printf("Type the integer whose machine " 
		"representation you do want to be"
		" inverted:\n");
	scanf("%u", n);
}

void bit_print(unsigned int *n, unsigned int rec){
	unsigned int mask = 1;
	mask <<= rec - 1;
	if(rec > 0){
		printf("%c", ((mask & *n) == 0) ? '0':'1');
		mask >>= 1;
		if((rec - 1) % 4 == 0)
			printf(" ");
		bit_print(n, --rec);
	}
	else
		printf("\n");
}
		
void bit_revert(unsigned int *n,unsigned  int *m,unsigned  int rec){
	unsigned int mask = 1;
	unsigned int ksam = 1;
	ksam <<= rec - 1;
	if(rec > 0){
		if((mask & *n) == 0)
			*m += 1;
		mask <<= 1;
		*m <<= 1;
		bit_revert(n, m, --rec);
	}
}
			
	







