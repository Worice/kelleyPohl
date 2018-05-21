/* Exercise 9.6b */

#include <stdio.h>
#include <math.h>

#define PI 3.14159

/* Versione A */
typedef	double	dbl;
/*typedef	dbl	(*PFDD)(dbl);*/

/* Versione B */
typedef	dbl	FDD(dbl);
typedef	FDD	*PFDD;

int main(void){
	PFDD f = sin, g = cos;

	printf("f(%f) = %f\n", PI, f(PI));
	printf("g(%f) = %f\n", PI, g(PI));

	return 0;
}



