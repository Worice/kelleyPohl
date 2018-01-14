/* Exercise 4.14
 *
 * The function putchar() returns the int value of the character 
 * that it writes. What does the following code print?
 *
 * 	for (putehar('1'); putehar('2'); putehar('3'))
 * 	putehar(' 4');
 *
 */

#include<stdio.h>

int main(int main, char *argv[]){

        for (putchar('1'); putchar('2'); putchar('3'))
                putchar('4');

	printf("\nThe code:"
	        "\tfor (putchar('1'); putchar('2'); putchar('3'))\n"
			"\t\tputchar('4');\n\n"
		"\ngoes in an eternal loop that prints 1 plus\n"
		"234234234234...\n\n"); 

	return 0;
}
