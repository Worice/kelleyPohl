/* Exercise 7.9
 *
 * bit_print */



#include<stdio.h>
#define DIM 32
void bit_print(int *, int);
/* MAIN */

int main(){
	int input = 0;
	printf("Type an number with binary rapresentation you do want to check:\n");
	scanf("%d", &input);
	bit_print(&input, DIM);
	return 0;
}

/* AUX */

void bit_print(int *n, int rec){
	int mask = 1;
	if(rec > 0){
		printf("%c", ((mask & *n) == 0) ? '0' : '1');
		if((rec - 1) % 4 == 0)
			printf(" ");
		 *n >>= 1;
		bit_print(n, rec - 1);
	}
	else
		printf("\n");
}




