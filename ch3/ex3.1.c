/* Exercise 3.1
 * Not all real numbers are machine-representable; there are too 
 * many of them. Thus,
 * the numbers that are available on a machine have a "graininess" 
 * to them. As an
 * example of this, the code
 *
 * double x = 123.45123451234512345;
 * double y = 123.45123451234512300; //last two digits zero//
 * printf("%.17f\n%.17f\n", x, y);
 * 
 * causes two identical numbers to be printed. How many zeros must 
 * the initializer for Y end with to get different numbers printed? 
 * Explain your answer.
 */ 

#include<stdio.h>

int main(void){
	double x = 123.45123451234512345;
	double y = 123.45123451234512300;
	printf("%.17f\n%.19f\n", x, y);
	printf("\nThe program prints two identical numbers that are\n"
		"sligthly different from the initializers. Adding\n"
		"even one number to the print expression change the\n"			"result. The reason must be the rounding of the\n"
		"numbers represented.\n\n");
	return 0;
}

