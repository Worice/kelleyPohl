/* Exercise 4.1
 *
 * Give equivalent logical expressions of the following "Without negation:
 *
 * 	!(a < b) 
 * 	!(a <= b && c <= d)
 * 	!(a + 1 == b + 1)
 * 	!(a < b || b < 2 && c < 3)
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	int a = 1, b = 4, c = 1, d = 4;

	printf("\nEquivalent logical expressions:\n"
		"Negation		T/F	W/o negation		T/F\n"
		"!(a < b)		%d	(a >= b)		%d\n"
		"!(a <= b && c <= d)	%d	(a > b && c > d)	%d\n"
		"!(a + 1 == b + 1)	%d	(a + 1 != b + 1)	%d\n"
		"This last case is not true for every value:\n"
		"!(a<b || b<2 && c<3)	%d	(a>=b || b>=2 && c>=3)	%d\n",
		!(a < b), a >= b, 
		!(a <= b && c <= d), a > b && c > d,
		!(a + 1 == b + 1), (a + 1 != b + 1), 
		!(a < b || b < 2 && c < 3), (a >= b || b >= 2 && c >= 3));
	return 0;
}


