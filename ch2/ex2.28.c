/* Exercise 2.28
 *
 * In both ANSI C and traditional C, a backslash at the end of a line in a string 
 * constant has the effect of continuing it to the next line. Here is an example of 
 * this:
 *
 * 	"by using a backslash at the end of the line \
 * 	a string can be extended from one line to the next"
 * 
 * Write a program that uses this construct. Many screens have 80 characters per line.
 * What happens if you try to print a string with more than 80 characters.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	int i;

	for(i = 0; i < 80; ++i)
		printf("a");
	printf("\n");
	for(i = 0; i < 100; ++i)
		printf("b");
	printf("\nIf print more than 80 chars, let's say 100, the text"
		"automatically continues on a newline.\n");

	return 0;
} 
