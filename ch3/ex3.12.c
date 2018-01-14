/* Exercise 3.12
 *
 * A variable of type char can be used to store small integer values. What happens if a
 * large value is assigned to a char variable? Consider the code:
 *
 * 	char c1 = 256, c2 = 257;
 * 	printf("c1 = %d\nc2 = %d\n", c1, c2);
 *
 * Your compiler should complain. Does it? Even if it does complain, it will probably
 * produce executable code. Can you guess what gets printed?
 */

#include<stdio.h>

int main(int argc, char  *argv[]){
	char c1 = 256, c2 = 257;
	printf("c1 = %d\nc2 = %d\n", c1, c2);
	printf("\nThe pc represents the number with 2's complement. Chars are represented\n"
		"with one byte. One byte numbers can range from -128 to 1).\n"
		"Because of that, the complainer warns about the \"overflow\n"
		"in implicit constant conversion\"\n"
		"256 requires 9 bits, hence the leftmost significative one cannot be\n"
		"taken in account: of 1 0000 0000 remains 0000 0000 = 0.\n"
		"In a similar fashion, 257 = 1 0000 0001 = 0000 0001 = 1.\n\n");

}


