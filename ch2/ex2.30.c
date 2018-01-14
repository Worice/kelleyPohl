/* Exercise 2.30
 *
 * When you invoke the compiler, the system first invokes the preprocessor. In this
 * exercise we want to deliberately make a preprocessing error, just to see what hap-
 * pens. Try the following program:
 * 
 * #incl <stdixx.h>			*two errors on this line*
 *
 * int main(void){
 * 	printf("Try me.\n");
 * 	return 0;
 * }
 *
 */

#include<stdio.h>

int main(void){
	printf("\nThe program:\n\n"
		"\t#incl <stdixx.h>\n"
		"\tint main(void){\n"
			"\t\tprintf(\"Try me.\\n\");"
		"\treturn 0;\n\n");
	printf("does not work. The proprocessor complains about \"#incl\" as an\n"
		"\"invalid preprocessing directive\"\n\n");
	return 0;

}
