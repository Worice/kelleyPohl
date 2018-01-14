/* Exercise 3.25
 *
 * In mathematical code, the use of abs() instead of fabs() can be disastrous. Try
 * the following program on your machine:
 *
 * 	#include <math.h>
 * 	#include <stdio.h>
 * 	#include <stdlib.h>
 *
 * 	int main(void){
 *      	double  x = -2.357;
 *		
 *		printf(" abs(x) = %e\n", abs(x));
 *              printf("fabs(x) = %e\n", fabs(x));
 *
 * 		return 0;
 *      }
 *
 *
 * Some compilers give a warning, others do not. What happens on your machine?
 * Here, the programmer can easily spot that something is wrong. But sometimes the
 * use of abs() is deeply embedded in lots of other code, malting its misuse difficult
 * to spot.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	double	x = -2.357;

	printf(" abs(x) = %d\n", abs(x));
	printf("fabs(x) = %e\n", fabs(x));

	printf("\nThe operator with specifier %%e is not suitable for abs(x).\n"
		"Even if x is a double, abs returns the absolute value only of\n"
		"the decimal/integer part of x.\n\n");

	return 0;
}
