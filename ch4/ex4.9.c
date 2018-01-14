/* Exercise 4.9
 *
 * What gets printed? Explain.
 *
 */

#include<stdio.h>

int main(void){
	printf("\nThe program from the exercise 4.9\n\n"
		"\tint i = 7, j = 7;\n"
		"\tif (i == 1)\n"
			"\t\tif (j == 2)\n"
				"\t\t\tprintf(\"%%d\", i = i + j);\n"
			"\t\telse\n"
				"\t\t\tprintf(\"%%d\", i = i - j);\n"
			"\t\tprintf(\"%%d\", i);\n"
		"\treturn 0;\n"
		"produces 7. Confirmed?\n");


	int i = 7, j = 7;
	if (i == 1)
		if (j == 2)
			printf("%d\n", i = i + j);
		else
			printf("%d\n", i = i - j);
		printf("%d\n", i);

	printf("\nCorrect!\n"
		"The if-else construct presented in the program\n"
		"is ambiguos. It refers to conditions that are not\n"
		"met with the data. The problem could be due even\n"
		"to a dangling-else, where the last print statement\n"
		"could have been better nested in the program.\n\n");
	
	return 0;	
}
