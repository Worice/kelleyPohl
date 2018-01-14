/* Exercise 2.12
 * The program that you wrote in exercise 12 contains a while loop. Write another
 * program that has the same effect, but use a for loop instead.
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int i = 0, power = 1;
	printf("\n");
	for(; i < 10; ++i)
		printf("%-6d", power *= 2);
	printf("\n");
	return 0;
}
