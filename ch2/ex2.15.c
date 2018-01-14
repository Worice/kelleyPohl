/* Exercise 2.15
 *
 * What is the effect in the following statement if some, or all, of the parentheses 
 * are removed? Explain.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int x, y, z;
	x = (y = 2) + (z = 3);
	printf("\n\"x = (y = 2) + (z = 3)\" means that x = %d\n", x);
	
	x = y = 2 + (z = 3);
        printf("\nWithout few brackets, \"x = y = 2 + (z = 3)\" means\n" 
                "that x = %d\n", x);

	
	/*x = y = 2 + z = 3;*/
	printf("\nWith no brackets, \"x = y = 2 + z = 3\" the program\n"
		"throws an error: \"lvalue required as left operand\n" 
		"of assignment\"\n\n");
	return 0;
}

 
