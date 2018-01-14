/* Exercise 4.10
 *
 *	while (++i < LIMIT) do {	//syntax error
 *	j = 2 * i + 3;
 *	pri ntf("j = %d\n", j);
	}
 *
 *	//many laguages require DO, but C does not.
 *
 * Run a test program with this piece of code in it to find out 
 * how your compiler reports this syntax error. Explain why.
 *
 */

#include<stdio.h>
#define LIMIT 10


int main(int argc, char *argv[]){

	int i, j;

	while (++i < LIMIT) {
		j = 2 * i + 3;
		printf("j = %d\n", j);
	}
	
	printf("\nThe compiler says:\n"
			"\t\"error: expected ‘while’ before ‘return’\n"
		"A WHILE loop in C does not require a DO.\n\n" 
		
		 "\twhile (++i < LIMIT) do{\n"
		 	"\t\tj = 2 * i + 3;\n"
			"\t\tprintf(\"j = %%d\", j);\n"
		"\t}\n\n"
		
		"Here, the compiler thinks DO as a whole indipendent\n"
		"construct nested in the\n"
		"WHILE loop. Hence, it complains about the lack\n"
		"of the WHILE part that a DO-WHILE loop usually\n"
		"requires.\n\n");
	
	return 0;
}



