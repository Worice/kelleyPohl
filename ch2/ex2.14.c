/* Exercise 2.14
 * Study the following code and write down what you think gets printed. Then write a
 * test program to check your answers.
 */

#include<stdio.h>

int main(int argc, char *argv){
	int a, b = 0, c = 0;
	printf("\nNow I expect a = 2, b = 1, c = 1.\n");
	a = ++b + ++c;
	printf("%d %d %d\n", a, b, c);
	printf("\nNow I expect a = 2, b = 2, c = 2.\n");
	a = b++ + c++;
	printf("%d %d %d\n", a, b, c);
	printf("\nNow I expect a = 5, b = 3, c = 3.\n");
	a = ++b + c++;
	printf("%d %d %d\n", a, b, c);
	printf("\nNow I expect a = 5, b = 2, c = 2.\n");
	a = b-- + --c;
	printf("%d %d %d\n", a, b, c);

	return 0;
}
