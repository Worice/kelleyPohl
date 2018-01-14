/* Exercise 5.18
 *
 * The greatest common divisor of two positive integers is the largest integer that is a
 * divisor of both of them. For example, 3 is the greatest common divisor of 6 and 15,
 * and 1 is the greatest common divisor of 15 and 22. Here is a recursive function that
 * computes the greatest common divisor of two positive integers:
 *
 * [code on book]
 *
 * First, write a program to test the function. Then write and test an equivalent itera-
 * tive function.
 *
 */

#include<stdio.h>

int gcd_recursive(int, int);
int gcd_iterative(int, int);


/* Main				*********/

int main(){
	printf("\ngcd_recursive(45, 75): %d.\n", gcd_recursive(45, 75));
	printf("\ngcd_iterative(45, 75): %d.\n", gcd_iterative(45, 75));
	return 0;
}

/* Functions			**********/

int gcd_recursive(int p, int q){
	int r;
	if ((r = p % q) == 0)
		return q;
	else
		return gcd_recursive(q, r);
}

int gcd_iterative(int m, int n){
	int i, out;
	for(i = 2; i <= m; ++i){
		if(m % i == 0 && n % i == 0)
			out = i;
	}
	return out;
}
		



