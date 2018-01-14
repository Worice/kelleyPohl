/* Exercise 5.14
 *
 * Write a function that finds all factors of any particular number.
 */

#include<stdio.h>

void intro(void);
void get_number(void);
void factors(int);

int n;

/* Main 		******/

int main(){
	intro();
	get_number();
	factors(n);	
	return 0;

}

/* Functions            ******/

void intro(void){
	printf("\nLet's find out every factor of a number of choice:\n\n");
}

void get_number(void){
	scanf("%d", &n);
	printf("\nThe factors of %d are:\n\n", n);
}

void factors(int n){
	int i = 2, j = n, flag = 1;
	while(i <= j){
		if(j % i == 0){
			printf("%d ", i);
			j /= i;
			flag = j != i;
		}
		else
			++i;

	}
	if(flag)
		printf("None! %d is prime!\n\n", n);

}
			





