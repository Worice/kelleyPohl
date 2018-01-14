/* Exercise 2.6
 * Take a symbol such as + and show the different ways it can be used in a program.
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\n+i\t\tUnary operator;\n"
		"j + i\t\tBinary operator;\n"
		"++i\t\tPrefix increment operator;\n"
		"i++\t\tPostfix increment opertator.\n\n");
	return 0;
}
