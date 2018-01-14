/* Excercise 5.19
 *
 * In some systems the keyword extern is used in function declarations and proto-
 * types in the standard header files. This was a common practice in traditional C sys-
 * tems, but it is usually not done in ANSI C systems. Is this done in your system?
 * Hint; Look, for example, in math.h.
 *
 */

#include<stdio.h>

extern int n = 6;

int main(){
	printf("\n\n extern int n = %d\n\n", n);
	printf("\nIt is used as extern, but a warning appears at compile time.\n\n");
	
	return 0;
}

