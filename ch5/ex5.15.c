/* Exercise 5.15
 *
 * This exercise gives you practice on understanding the scope of identifiers. What
 * gets printed by the following code? First, hand simulate the code and record your
 * answers. Then write a program to check your answers.
 *
 * [code on the book]
 *
 */

#include<stdio.h>

int main(){
	int a = 1, b = 2, c = 3;
	a += b += ++c;
	printf("%d%d%d\n", a, b, c);
	{
		float b = 4.0;
		int c;
		a += c = 5 * b;
		printf("%5d%5.1f%5d\n", a, b, c);
	}
	printf("%5d%5d%5d\n", a, b, c);
	return 0;
}
