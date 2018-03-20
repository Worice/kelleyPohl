/* Ex. 7.4 
 * Does your machine introduve sign bits while right shifting?
 */

#include<stdio.h>

void bit_print(int *);

int main(){
	int 		i = -1;
	unsigned 	u = abs(-1);
	bit_print(&i);
	bit_print(&u);

	if((i >>= 1) == (u >>= 1))
		printf("Zeroes are signed in.\n");
	else
		printf("Sign bits are shifted in.\n");
	bit_print(&i);
	bit_print(&u);
	return 0;
}

/* AUX */

void bit_print(int *n){
	int mask = 1, i = 0;
	mask <<= 32 - 1;

	for(; i < 32; ++i){
		if(i % 4 == 0)
			printf(" ");
		printf("%c", ((mask & *n) == 0) ? '0' : '1');
		mask >>= 1;
	}
	printf("\n");
}
