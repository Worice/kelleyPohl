/* Exercise 5.12
 *
 * Write a function, say is_fib_prime(), that checks whether the nth Fibonacci num-
 * ber is prime. Your function should call two other functions: the iterative version
 * fibonacci() that was given in Section 4.13, "An Example: Fibonacci Numbers,"
 * page 175, and the function is_prime() that you wrote in the previous exercise. For
 * n between 3 and 10, it is true that the nth Fibonacci number is prime if and only if
 * is prime. Use your function is_fib_prime() to investigate what happens when n is
 * bigger than 10.
 *
 */

#include<stdio.h>
void 	get_input(void);
int 	fibonacci(int input);
void 	fib_prime(int);
int input;

/********************/

int main(){
	get_input();
	printf("\nThe Fibonacci number in position %d is %d.\n\n", input, fibonacci(input));
	fib_prime(fibonacci(input));
	return 0;
}

/********************/

void get_input(void){
	extern int input;
	printf("\nWhich position of the Fibonacci sequence are you interested in?\n");
	scanf("%d", &input);
}

int fibonacci(int n){
	extern int input;
	int k = 0;
	int a = 0, b = 1, c;
	if(input == 0)
		return a;
	else if(input == 1)
		return b;
	else{
		for(k = 2; k <= input; ++k){
			c = b + a;
			a = b;
			b = c;
		}
       		return c;		
	}
}

void fib_prime(int n){
	int k = 2, flag = 1;
	do{
		flag = n % k++;
	}while(flag != 0 && k != n && k < (n / 2));
	if(flag != 0)
		printf("\nIt is a prime number!\n");
	else
		printf("\nIt is not a prime.\n");
}


