/* Exercise 2.7 
 * ANSI C does not provide for the nesting of comments, although many 
 * compilers provide an option for this. Try the following line on your 
 * compiler and see what happens:
 
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\nA comment such as this:\n"
		"/* This is an attempt /* to nest */ a comment. */\n"
		"makes the complainer throw tens of errors.\n\n");
	return 0;
}
