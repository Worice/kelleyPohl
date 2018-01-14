/* Exercise 4.21
 *
 * The semantics of logical expressions imply that order of evaluation is critical in
 * some computations. Which of the following two alternate expressions is most likely
 * to be the correct one? Explain.
 *
 * if ((x != 0.0) && ((z - x) / x * x < 2.0))
 *         
 * if (((z - x) / x * x < 2.0) && (x != 0.0))
 *
 */

#include<stdio.h>

int main(void){
	
	printf("\nI think that\n\n"
		"if ((x != 0.0) && ((z - x) / x * x < 2.0))\n\n"
		"is more correct than: \n\n"
		"if (((z - x) / x * x < 2.0) && (x != 0.0))\n\n"
		"The reason is that in the eventuality of x being equal to zero\n"
		"many unnecessary computations can be avoided.\n\n");
	return 0;
}
