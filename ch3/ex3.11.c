/*
 * Explain why the following code prints the largest integral value on your system:
 * 
 * unsigned long val = -1;
 * printf("The biggest integer value: %lu\n", val);
 * 
 * What gets printed on your system? Although technically the value that gets printed
 * is system-dependent, on most systems the value is approximately 4 billion. Explain.
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	unsigned long val = -1;
	printf("\nThe biggest integer value: %lu\n", val);
	printf("\nThe expected number ought be approximately 4 billion, but we have\n"
		"18 billion of billion.\n\n");	
}
