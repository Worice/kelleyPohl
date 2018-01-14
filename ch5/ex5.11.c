/* Exercise 5.11
 *
 * Write a function int is_prime(int n) that returns 1 if n is a prime and 0 other-
 * wise. Hint: If k and n are positive integers, then k divides n if and only if n % has
 * value zero.
 *
 */

#include<stdio.h>
#include<stdlib.h>

void get_input(void);
void print_input(void);
void check_prime(void);
int n = 1;

/******************************/

int main(){
	get_input();
	print_input();
	check_prime();
	return 0;
}

/******************************/

void get_input(void){
	extern int n;
	printf("\nWhich natural number would you check for primeness?\n");
	scanf("%d", &n);
}

void print_input(void){
	extern int n;
	printf("\nThe input is: %d.\n\n", n);
}

void check_prime(void){
	extern int n;
	int k = 1, flag = 1;
	do{
		flag = n % ++k;
	}while(flag > 0 && k < (n / 2));
	printf("%d\n\n", flag);
}
		
