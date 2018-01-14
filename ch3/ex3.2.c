/* Exercise 3.2
 *
 * The mathematical formula:
 *
 * 	sin^2(x) + cos^2(X) = 1
 *
 * holds for all x real. Does this formula hold on your machine? 
 * Try the following program:
 *
 * #include <math.h>
 * #include <stdio.h>
 * int main(void){
 * 	double two_pi 		= 2 .0 * M_PI; 	// in math.h //
 * 	double h		= 0.1;
 * 	double x;
 * 
 * 	for (x = 0.0; x < two_pi; x += h)
 * 	printf("%5.lf: %.15e\n",
 * 		sin(x) * sin(x) + cos(x) + cos(x));
 * 	return 0;
 * }
 * 
 * What happens if the format %.15e is changed to %.15f? Explain.
 */

#include<stdio.h>
#include<math.h>

int main(void){
	double two_pi           = 2.0 * M_PI;  // in math.h //
	double h                = 0.1;		//step size//
	double x;

	printf("\nWith \".15e\" the program prints:\n");
	for (x = 0.0; x < two_pi; x += h)
		printf("%5.1f: %.15e\n",
			x, sin(x) * sin(x) + cos(x) + cos(x));
	
	printf("\nWith \".15f\" the program prints:\n");
	for (x = 0.0; x < two_pi; x += h)
	        printf("%5.1f: %.15f\n",
	                x, sin(x) * sin(x) + cos(x) + cos(x));
	printf("\nWhere the \"e\" is in the print expression,\n"
		"the exponent of the number is dispayed and,\n"
		"eventually, the number changes his position\n"
		"respect the decimal point. The integer part\n"
		"will always be 0 or 1 (scientific and\n"
		"polarized notation).\n\n");
	return 0;
}







