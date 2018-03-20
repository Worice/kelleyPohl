/* Exercise 7.3 
 *
 *Function shifting left the most significant bit
 * */

#include<stdio.h>
#include<limits.h>
int circular_shift(int *);
void take_input(int *);
void bit_print(int *, int);
void bit_print2(int **, int);
#define DIM 32 


/* MAIN */

int main(){
	int a;
	take_input(&a);
	bit_print(&a, DIM);
	circular_shift(&a);
	return 0;
}

/* AUX */

int circular_shift(int *a){
	int n = 0;
	printf("\nLet's shift it by:\n");
	scanf("%d", &n);

	int mask = 1;
	mask <<= DIM - 1;
	for(; n > 0; --n){
		if((mask & *a) == 0)
			*a <<= 1;
		else{
			*a <<= 1;
			*a += 1;
		}
	}
	bit_print2(&a, DIM);
	return 0;
}


void take_input(int *a){
	printf("\nChoose an integer:\n");
	scanf("%d", a);
}

void bit_print(int *a, int rec){
	static int mask = 1;
	if(rec <= 0 )
		printf("\n");
		
	else{
		bit_print(a, rec - 1);
		printf("%c", ((mask & *a) == 0) ? '0':'1');
		if(rec % 4 == 0)
			printf(" ");
		mask <<= 1;
	}
}


void bit_print2(int **a, int rec){
	static int mask = 1;
	if(rec <= 0 )
		printf("\n");
		
	else{
		bit_print2(a, rec - 1);
		printf("%c", ((mask & **a) == 0) ? '0':'1');
		if(rec % 4 == 0)
			printf(" ");
		mask <<= 1;
	}
}

