/* Exercise 4.20
 *
 * The following code is meant to give you practice with short-circuit evaluation:
 *
 * 	int a = 0, b = 0, x;
 *
 * 	x = 0 && (a = b = 777);
 * 	printf("%d %d %d\n", a, b, x);
 * 	x = 777 || (a = ++b);
 * 	printf("%d %d %d\n", a, b, x);
 *
 * What gets printed? First, write down your answers. Then write a test program to
 * check them.
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int a = 0, b = 0, x, test = 1;

	x = 0 && (a = b = 777);		/*First short circuit*/
	printf("\nThe first part of the code, namely:\n\n"
        	"\tint a = 0, b = 0, x;\n"
		"\tx = 0 && (a = b = 777);\n\n"
		"should print x = 0 , a = 0 and b = . The reason is that\n"
		"that both arguments of && \"x = 0 && (a = b = 777)\" need to\n"
		"be evaluated in order to see if && is TRUE. Since the first argument\n"
		"\"x = 0\" is false, the second argument had no need to\n"
	        "be evaluated.\n"
		"Let's see:\n\n");
	printf("%d %d %d\n", a, b, x);

	printf("\nThe second part of the code:\n\n"
		"\tx = 777 || (a = ++b);\n"
		"\nshould return a = 0, b = 0 and x = 1\n");


        x = 777 || (a = ++b);		/*Second short circuit*/
        printf("%d %d %d\n", a, b, x);

	return 0;
}
