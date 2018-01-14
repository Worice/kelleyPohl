/* Exercise 5.16
 *
 * Rewrite "The universe is never ending'" recursion so that it terminates after 17
 * calls. Your program should consist of a single mai n 0 function that calls itself
 * recursively. Hint: Use a static variable as a counter.
 *
 */

#include<stdio.h>

int main(){
	static int n = 17;
	if(n-- >= 0){
		printf(" The universe is never ending! ");
	
	main();

	}
	return 0;
}

