/* Exercise 3.19
 *
 * In mathematics, the numbers epsilon and pi are well known. The number epsilon is 
 * the base of the natural logarithms and the number pi is the ratio of the diameter 
 * of a circle to its circumference. Which of the two numbers, epsilon and pi, is 
 * larger? This is a standard problem for students in an honors calculus course. 
 * However, even if you have never heard of epsilon and pi and know nothing about 
 * calculus, you should be able to answer this question. Hint:
 *
 * epsilon 	= 2.71828182845904524
 * pi		= 3.14159265358979324
 *
 */

#include<stdio.h>

int main(int argc, char *argv[]){
	double epsilon      = 2.71828182845904524;
	double pi           = 3.14159265358979324;

	if(epsilon > pi)
		printf("\nepsilon is bigger than pi.\n\n");
	else if(pi > epsilon)
		printf("\npi is larger than epsilon\n\n");
	else
		printf("\nUnable to compare pi and epsilon.\n\n");
}	



