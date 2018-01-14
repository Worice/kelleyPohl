/* Exercise 3.18
 *
 * The ANSI C standard suggests that the recommendations of IEEE Standard for
 * Binary Floating-Point Arithmetic (ANSI/IEEE Std 754-1985) be followed. Does your
 * compiler follow these recommendations? Well, one test is to try to see what hap-
 * pens when you assign a value to a floating variable that is out of its range. 
 * Write a small program containing the lines:
 *
 * 	double x = 1e+307;              *big!*
 *	double y = x * x;               *too big!*
 *	printf("x = %e          	y = %e\n", x, y);
 *
 *
 * Does the value for y get printed as Inf of Infinity? If so, there is a good 
 * chance that your compiler is following ANSI/IEEE Std 754-1985.
 */ 

#include<stdio.h>

int main(void){
	double x = 1e+307;		/*big!*/
	double y = x * x;		/*too big!*/
	printf("x = %e		y = %e\n", x, y);
	printf("\nSince y has been print as \"inf\", is quite likely that\n"
		"my compiler follows the ANSI standard.\n\n");

}



