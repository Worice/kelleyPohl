/* Exercise 4.19
 *
 * Until interrupted, the following code prints TRUE FOREVER on the screen repeat-
 * edly. (In UNIX, type a control-c to effect an interrupt.)
 *
 * 	while (1)
 * 		printf(" TRUE FOREVER ");
 *
 *
 * Write a simple program that accomplishes the same thing, but use a for statement
 * instead of a while statement. The body of the for statement should contain just
 * the empty statement";".
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int i = 0;

	for(; ; ){
		printf(" TRUE FOREVER ");
		++i;
	}
	return 0;
}	
