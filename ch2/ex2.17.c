/* Exercise 2.17 
 * Consider the following code:
 * 
 * int a = 1, b = 2, c = 3;
 * a += b += c += 7;
 *
 * Write an equivalent statement that is fully parenthesized. What are the values of
 * the variables a, b, and c? First write down your answer. Then write a test program
 * to check your answer.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int a = 1, b = 2, c = 3;
	 printf("\n\"a += b += c += 7\" is equal to \"a += (b += (c += 7))\"\n"
		"where c = 3 + 7 = 10, b = 2 + 10 = 12, a = 1 + 12\n\n");
	return 0;
}
