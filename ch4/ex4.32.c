/* Exercise 4.32
 *
 * Here is a simple way to test the effect of a conti nue statement in the body of a for
 * loop. What gets printed?
 *
 * 	for (putchar('1'); putchar('2'); putchar('3')) {
 * 		putchar('4');
 * 		continue;
 * 		putchar('5');
 *
 */


#include<stdio.h>

int main(int argc, char *argv[]){
	
	printf("\nThe program:\n\n"
			"\tfor (putchar('1'); putchar('2'); putchar('3')) {\n"
				"\t\tputchar('4');\n"
				"\t\tcontinue;\n"
				"\tputchar('5');\n"
			"\t}\n\n"
		"returns an infinite loop \
	return 0;
}
