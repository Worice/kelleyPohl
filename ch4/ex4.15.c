/* Exercise 4.15
 *
 * For the C language, answer the following true-false questions:
 * Every statement ends in a semicolon.
 * Every statement contains at least one semicolon.
 * Every statement contains at most one semicolon.
 * There exists a statement with precisely 33 semicolons.
 * There exists a statement made up of 35 characters that contains 33 semicolons.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\nFor the C language, answer the following true-false questions:\n\n"
		"\t* Every statement ends in a semicolon.\n"
		"\t  False. Legal statement, such as 4.447, do not necesarily need a semicolon.\n"
		"\t  They will not do anything useful, and some compiler could point it out.\n\n"
		"\t* Every statement contains at least one semicolon.\n"
		"\t  False. A statement, like \"(if x < 2)\" can be legal without semicolon.\n"
		"\t  It will just have no effects.\n\n"
		"\t* Every statement contains at most one semicolon.\n"
		"\t  A statement can be composed by several statements. Even so, it will remain\n"
		"\t  a single statament, but with several semicolons in the middle.\n\n"
		"\t* There exists a statement with precisely 33 semicolons.\n"
		"\t  I think it is possible. We could imagine a camposed statement with 33\n"
		"\t  empty instructions.\n\n"
		"\t*  There exists a statement made up of 35 characters that contains 33 semicolons.\n"
		"\t  Potentially, it is possible. {long double namecomposedby30chars = 4.0;\n"
		"\t  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;}\n\n");

	return 0;
}
