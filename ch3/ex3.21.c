/* Exercise 3.21
 *
 * If the value of x is too large, the call pow(x,x) may cause a run-time error or may
 * cause the word Inf or Infinity to appear on the screen when a printf() state-
 * ment is used to print the value produced by pow (x, x). What is the largest integer
 * value for x such that the statement
 *
 * 	printf("pow(%.1f, %.1f) == %.7e\n", x, x, pow(x, x));
 * 
 * does not cause a run-time error and does not cause Inf or Infinity to be printed?
 * Hint: Put the statement in a for loop.
 *
 */

#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
	
	float 		x = 1;

	for(; pow(x, x) < INFINITY; x += 1.);
	printf("\npow(%.1f, %.1f) == %.7e\n\n", x, x, pow(x -1.0, x - 1.0));
}
