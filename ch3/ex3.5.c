/* Exercise 3.5
 *
 * Use the following code to print out a list of powers of 2 in 
 * decimal, hexadecimal, and octal:
 *
 * int i, val = 1;
 * 	for (i = 1; i < 35; ++i) {
 * 	printf("%15d%15u%15x%15o\n", val, val, val, val);
 * 		val , *= 2;
 * 	}
 *
 * What gets printed? Explain. Powers of 2 have a special property 
 * when written in hexadecimal and octal notation. What is the 
 * property?
 */

#include<stdio.h>
int main(int argc, char *argv[]){
	int i, val = 1;
	for (i = 1; i < 35; ++i) {
		printf("%15d%15u%15x%15o\n", val, val, val, val);
	val *= 2;
	}
	
	printf("\nOctal and hex number representation well fit\n"
		"power of 2 because the most significant digit\n"
		"is enough to represent the result of the power\n"
		"operation.\n"
		"Double and Unsidegned double representation go\n"
		"up to 2147483648. It is the maximum number\n"
		"that this machine can represent with a double\n"
		"format. The differece is that the double format\n"
		"reprents 2147483648 as a negative number.\n"
		"It happens because the biggest signed integer\n"
		"that we can represent on a 32 bits machine is\n"
	       	"2147483647. The program is causing an integer\n"
		"overflow.\n\n");
	
	return 0;
}	


