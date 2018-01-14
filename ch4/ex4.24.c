/* Exercise 4.24
 *
 * Write a program that repeatedly reads in values for a, b, and c and finds the roots
 * of the polynomial
 *
 * 	ax^2 + bx + c 
 * 
 * Recall that the roots are real or complex numbers that solve the equation
 *
 * 	ax^2 + bx + c = 0
 *
 * Ehen both a = 0 and b = 0, we consider the case to be "extremely degenerate", and 
 * leave it at that. When a = 0 and b != 0, we consider the case to be "degenerate". In
 * this case, the equation reduces to
 *
 * 	bx + c = 0
 *
 * and has one root given by x = -c / b.
 *
 * When a != 0 zero (the general case), the roots are given by
 *
 * 	root1 = 1/2a(-b + sqrt(b^2 - 4ac))
 * 	root2 = 1/2a(-b - sqrt(b^2 - 4ac))
 *
 * The expression under the square root sign is the discriminant. If the discriminant is
 * positive, then two real roots exist. If the discriminant is zero, then the two roots 
 * are
 * real and equal. In this case we say that the polynomial (or the associated equation)
 * has multiple real roots. If the discriminant is negative, then the roots are complex.
 * For each set of values for a, b, and c, your program should print the computed
 * root(s) along 'with one of the following messages:
 * 
 * 	degenerate two real roots extremely
 * 	degenerate two complex roots multiple real roots
 *
 * For example, if the values 1, 2, and 3 are read in for a, b, and c, respectively, then
 * the following should be printed:
 *
 * 	two complex roots:	root1 = -1.000000 + i*1.414214
 * 			   	root2 = -1.000000 - i*1.414214
 *
 */

#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
	printf("\nSolution already prepared for the exercise 4.23. Bye!\n\n");

