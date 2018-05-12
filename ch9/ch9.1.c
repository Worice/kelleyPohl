/* Exercise 9.1 */

#include <stdio.h>
/*typedef float DOLLARS;	create derivate type DOLLARS*/

#define DOLLARS float

/* Apparently, there is not difference between the two approaches */

int main(void){
	DOLLARS amount = 100.0, interest = 0.07 * amount;
	printf("DOLLARS = %2.f\n", amount + interest);
	return 0;
}


