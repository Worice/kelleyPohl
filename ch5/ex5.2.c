/* Exercise 5.2
 *
 * Use the library function sqrt() to write a function that returns the fourth root of
 * its i nt argument k. The value returned should be a double. Use your function to
 * make a table of values.
 *
 */

#include<stdio.h>
#include<math.h>
double square2(int k);

/****************************************************************/

int main(void){
	int 	k;
	scanf("%d", &k);
	square2(k);
	return 0;
}

/*****************************************************************/

double square2(int k){
	printf("\n%10s%10s%10s%10s\n",
		"Number", "square 2", "square 3", "square 4");
	printf("\n%10d%10lf%10lf%10lf\n",
			k, sqrt(k), sqrt(sqrt(k)), sqrt(sqrt(sqrt(k))));
	return 0;
}


