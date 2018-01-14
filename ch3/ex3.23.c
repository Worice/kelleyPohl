/* Exercise 3.23
 *
 * In traditional C, the types long float and double are synonymous. However,
 * because long float is harder to type, it was not popular and was rarely used. In
 * ANSI C, the type long float has been eliminated. Nonetheless, many ANSI C com-
 * pilers still accept it. Check to see if this is true on your compiler.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	
	/*long float x	= 1.5;*/
	double 	   y	= 0.5;

	printf("\nThe long float x is not accepted by the gcc compiler. It returns:\n"
		"\"error: both ‘long’ and ‘float’ in declaration specifiers\"\n"
		"the double y works regurly. Here it has the value %.1lf\n\n", 
		y);
}	
