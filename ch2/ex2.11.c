/* Exercise 2.11
 * For the pow_of_2 program in Section 2.12," Computing Powers of 2,"
 * on page 89, explain what the effect would be if the expression 
 * ++i were changed to i++.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int i = 0, poweri = 1, j = 0, powerj = 1;
	printf("\nWith ++i the program returns:\n");
	while(++i <= 10)
		printf("%-6d", poweri *= 2);
	printf("\n");
	printf("With j++ the programs returns, instead:\n");
	while(j++ <= 10)
		printf("%-6d", powerj *= 2);
	printf("\n\nIt represents the difference between a postfix\n"
		"and a prefix increment operator.\n\n");
	return 0;
}
