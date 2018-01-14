/* Exercise 2.4 
Which of the following are not identifiers and why?

3id	__yes		o_no_o_no	00_go		star*it
1_i_am	one_i_aren't	me_to-2		xYshouldI	int

*/

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\n\"3id\"\t\tIdentifiers cannot begin with a number;\n"
		"\"00_go\"\t\tIdem;\n"
		"\"1_i_am\"\tIdem;\n"
		"\"__yes\"\t\tUnderscore admitted but should be reserved to\n"
		"\t\tsystem programmers when used as first symbol;\n"
		"\"start*it\"\tThe symbol \"*\" is not admitted;\n"
		"\"one_i_aren't\"\tThe symbol \" ' \" is not admitted;\n"
		"\"me_to-2\"\tThe symbol \" - \" is not admitted;\n\n");
	return 0;
}
