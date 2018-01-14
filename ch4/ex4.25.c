/* Exerxise 4.25
 *
 * A truth table for a boolean function is a table consisting of all possible values for 
 * its
 * variables and the corresponding values of the boolean function itself. In Section
 * 4.10, "An Example: Boolean Variables," on page 170, we created a truth table for the
 * majority function and two other functions. In that table we used 1 and 0 to repre-
 * sent true and false, respectively. Create separate truth tables for the following bool-
 * ean functions:
 *
 * 	(a) b1 || b2 || b3 || b4
 * 	(b) b1 && b2 && b3 && b4
 * 	(c) !(!b1 || b2) && (!b3 || b4)
 *
 * Use the letters T and F in your truth tables to represent true and false, respectively.
 * Hint: Use the #define mechanism to define a BOOLEX, and write your program to
 * operate on an arbitrary BOOLEX.
 */

#include<stdio.h>

int main(int argc, char *arrv[]){

	int b1, b2, b3, b4;
	int cnt = 0;

	printf("\nI have no idea how to define a BOOLEX with #define. Normally should\n"
		"not be it defined with a typedef? I have nobody to ask, hence I will\n"
		"use 0 and 1.\n\n");

	printf("\n%5s%5s%5s%5s%5s%5s%5s%5s\n",
		"N", "b1", "b2", "b3", "b4", "fc1", "fc2", "fc3");

	for(b1 = 0; b1 <= 1 ; ++b1)
	    for(b2 = 0; b2 <= 1; ++b2)
		for(b3 = 0; b3 <= 1; ++b3)
	            for(b4 = 0; b4 <= 1; ++b4)
			    printf("\n%5d%5d%5d%5d%5d%5d%5d%5d",
				    ++cnt, b1, b2, b3, b4, 
				    b1 || b2 || b3 || b4,
				    b1 && b2 && b3 && b4,
			    	    !(!b1 || b2) && (!b3 || b4));	    
	printf("\n\n");
	
	
	return 0;
}
	
