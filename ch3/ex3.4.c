/* Exercise 3.4
 *
 * Write a test program to find out whether the printf() function 
 * truncates or rounds when writing a float or double with a 
 * fractional part. The ANSI standard requires rounding, but some 
 * systems do not do this. What happens on your machine?
 *
 */ 

#include<stdio.h>

int main(int argc, char *argv[]){
	double x = 1.7777777777;

	printf("\n%.10lf; %.5lf; %.2lf\n\n", x, x, x);
	printf("As we can see, my system happily embrace the ANSI\n"
		"committee directive by rounding the number\n"
		"when necessary.\n\n");
	return 0;
}
