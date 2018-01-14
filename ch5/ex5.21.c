/* Exercise 5.21
 *
 * When declaring a variable in traditional C, it is permissible to write the 
 * storage class specifier and the type specifier in any order.
 *
 * [code on book]
 *
 * In ANSI C, the storage class specifier is supposed to come first. Nonetheless, most
 * ANSI C compilers will accept either order. (If they did not, then some traditional
 * code would not compile.) Check to see if the reverse order works on your compiler.
 *
 */

#include<stdio.h>

int main(){
	register int i = 1;
	int register j = 2;
	int k;
	k = i + j;
	printf("\nMy gcc89 does not seem to make any difference between register int\n"
		"and int register.\n\n");


	return 0;
}
