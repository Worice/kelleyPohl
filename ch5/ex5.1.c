/* Exercise 5.1
 *
 * Write a function double power(double x, int n) that will compute x^n , the nth
 * power of x. Check to see that it computes 3.5^7 correctly. (The answer is
 * 6433.9296875.)
 *
 */

#include<stdio.h>

double pow2(double n, int x);


int main(int argc, char *argv[]){
	
	double n;
	int x;
	printf("\nType a number and its power:\n\n");
	scanf("%lf%d", &n, &x);

	printf("\nThe result is: %lf", pow2(n, x));

	return 0;
}

/******************/

double pow2(double n, int x){
	if(x == 0)
	     	return 1;
	else 
		return (n * pow2(n, x - 1));
}

