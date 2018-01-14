/* Exercise 3.8
 *
 * In mathematics the Greek letter E, called "epsilon," is often 
 * used to represent a small positive number. Although it can be 
 * arbitrarily small in mathematics, on a machine there is no such 
 * concept as "arbitrarily small." In numerical analYSis it is
 * convenient sometimes to declare eps (for "epsilon") as a variable 
 * of type double and to assign to eps the smallest positive number 
 * with the property that
 *
 * 	1. 0 < 1. 0 + eps
 *
 * is true. This number is machine-dependent. See if you can find 
 * eps on your machine. Begin by assigning the value 1e-37 to eps. 
 * You will find that for this value the expression is false.
 */

#include<stdio.h>
#include<math.h>

int main(void){
	double machEps = 1.0d;

    do {
        machEps /= 2.0d;
    }while((double)(1.0 + machEps) != 1.0);

    printf("\nCalculated machine epsilon:\n %.50lf\n%e\n", 
		    machEps, machEps);
}
