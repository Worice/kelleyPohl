/* Exercise 3.20
 *
 * What happens when the argument to the sqrt() function is negative? In some com-
 * pilers a call such as sqrt(-1.0) causes a run-time error to occur, whereas in other
 * compilers the special value NaN gets returned. The value NaN is called "not a num-
 * ber." What happens on your system? To find out, write a test program that contains
 * the line
 * printf("sqrt(-1.0) == %f\n", sqrt(-1.0));
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){

	printf("sqrt(-1.0) == %f\n", sqrt(-1.0));
	printf("\nMy compiler does not throw an error, but a Nan, the special\n"
		"\"not a number\" value!\n\n"); 
}
