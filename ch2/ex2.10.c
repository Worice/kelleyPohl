/* Exercise 2.10 
 * This exercise illustrates one place where white space around 
 * operators is important. The expression a+++b can be interpreted 
 * as either.
 *
 * a++ + b	or	a + ++b
 *
 * depending on how the plus symbols are grouped. The correct grouping 
 * is the first one. This is because the compiler groups the longest 
 * string as a token first, and so uses ++ instead of + as a first 
 * token. Write a short program to check this.
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int a = 1, b = 1;
	printf("\nFor a and b equal to 1, \"a++ + b\" returns %d,\n" 
		"while \"a + ++b\" returns %d\n\n", a++ + b, a + ++b);
	return 0;
}











