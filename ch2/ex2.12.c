/* Exercise 2.12
 * The following code can be used to write a variation of the pow_of_2 program. What 
 * get printed? Write a program to check your answer.
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int i = 0, power = 2048;
	printf("\n");
	while((power /= 2) > 0)
		printf("%-6d", power);

	printf("\nThe program prints the square roots of 2048 until it remains\n"
		"larger than zero.\n\n");

	return 0;
}
