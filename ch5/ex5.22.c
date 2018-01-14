/* Exercise 5.22
 *
 * Describe the behavior of the following program:
 *
 * [code on book]
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define FOREVER 1
#define STOP 17

int main(){
	
	printf("\nThe program will print 17 times the increasing value of the variable\n"
		"cnt, hidden inside of the function f. It is initialized to zero but,\n"
		"being static, its value is maintained and increased across every\n"
		"iteration of the loop.\n\n");

	void f(void);
	while(FOREVER)
		f();
	return 0;
}

void f(void){
	static int cnt = 0;
	printf("cnt = %d\n", ++cnt);
	if(cnt == STOP)
		exit(0);
}


