/* Exercise 3.26
 *
 * In C, the letters used in a hexadecimal constant can be either upper- or
 * lowercase or both. Consider the following code:
 *
 *	#include<stdio.h>
 *
 *	int main(int argc, char *argv[]){
 *	        int a = 0xabc;
 *	        int b = 0xABc;
 *	        int c = 0xABC;
 *	                                        
 *	        printf("a = %d          b = %d          c = %d\n", a, b, c);
 *	}                                        ~   
 *
 * Write down what you think gets printed. Then write a program containing
 * lines to check your answer.
 */

#include<stdio.h>

int main(int argc, char *argv[]){

	int a = 0xabc;
	int b = 0xABc;
	int c = 0xABC;

	printf("\nGiven that tehy can be both lower and uppercare, I suppose\n"
		"that the program will run without problem.\n\n");

	printf("a = %d		b = %d		c = %d\n", a, b, c);
}
