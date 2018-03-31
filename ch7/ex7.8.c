	/* Ex. 7.8
 * Print binary rapresentation of 2n and 2^n, for 0 <= n <= 32.
 * I did not implement the second part of the excercise.
 */

#include<stdio.h>
#include<limits.h>
#define MAX 31
void bit_print(int);

/* MAIN */

int main(){
	bit_print(MAX);
	return 0;
}

/* AUX */

void bit_print(int arg){
	int twom = 2, twos = 1, i = 0;
	twom *= arg; twos <<= (arg - 1);
	int mask = 1;
	if(arg >= 0){	
	
		bit_print(arg - 1);
		printf("%d:\t", arg);
	
		for(; i < MAX; ++i){
			printf("%c", ((mask & twom) == 0) ? '0': '1');
			mask <<= 1;
		}
		
		mask = 1;
		printf("\t");
		
		for(i = 0; i < MAX; ++i){		
			printf("%c", ((mask & twos) == 0) ? '0': '1');
			mask <<= 1;
		}

	}
	printf("\n");
}
		













