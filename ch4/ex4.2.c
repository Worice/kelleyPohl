/* Exercise 4.2
 *
 * Complete the following table:
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	int 	a = 1, b = 2, c = 3;
	double 	x = 1.0;

	printf("\nDeclarations and initializations:\n"
		"int 			a = 1, b = 2, c = 3\n"
		"double			x = 1.0\n\n"
		"Expression		Equivalent ex.			T/F	T/F\n"
		"a > b && c < b		(a > b) && (c > b)		%d	%d\n"
		"a < !b || !!a		(a < (!a)) || (!(!a))		%d	%d\n"
		"a + b < !c + c		(a + b) < ((!c) + c)		%d	%d\n"
		"a < x || b * c && b/a	(a < x) || ((b * c) && (b / a))	%d	%d\n\n",
		a > b && c < b, 	(a > b) && (c > b),
		a < !b || !!a, 		(a < (!a)) || (!(!a)),
		a + b < !c + c,		(a + b) < ((!c) + c),
		a < x || b * c && b/a,  (a < x) || ((b * c) && (b / a))
		);
		
		return 0;
}
