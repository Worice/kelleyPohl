/* Exercise 9.2 */

#include <stdio.h>
/*typedef float DOLLARS;	*/

#define DOLLARS float

/* Apparently, there is not difference between the two approaches */

int main(void){
	DOLLARS amount = 100.0, interest = 0.07 * amount;
	{
		float DOLLARS;
		DOLLARS = amount + interest;
		printf("DOLLARS = %2.f\n", DOLLARS);
	}
	return 0;
}


