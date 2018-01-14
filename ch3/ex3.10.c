/* Exercise 3.10
 *
 * Most machines use the two's complement representation to store integers. On these
 * machines, the value -1 stored in an integral type turns all bits on. Assuming that
 * your system does this, here is one way to determine whether a char is equivalent to
 * a signed char or to an unsigned char. Write a program that contains the lines
 * 
 *
 *
 *  Each of the variables c, s, and u is stored in memory with the bit pattern 1111 1111.
 *  What gets printed on your system? Can you tell from this what a char is equivalent
 *  to? Does your ANSI C compiler provide an option to change a plain char to, say, an
 *  unsigned char? If so, invoke the option, recompile your program, and run it again.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	char		c = -1;
	signed char	s = -1;
	unsigned char	u = -1;

	printf("\n\nc = %d or %c	s = %d	u = %d\n", c, c, s, u);
	printf("\nANSI C provide the cast operator (unsigned char). The operator happily\n"
		"converts a char to an unsigned char. Example follows:\n\n");
	printf("c = %d or %c	s = %d  u = %d\n",(unsigned char) c, (unsigned char) c, s, u);
	printf("\nI suspect that the strange question mark produced by -1 or 255\n"
		"char representation could represent an undefined behavior. The ASCII\n"
		"table does not have a -1 not a 255 char equivalent.\n\n");	
}
