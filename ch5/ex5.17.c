/* Exercise 5.17
 *
 * The following function produces incorrect values on some systems:
 *
 */

#include<stdio.h>
int factorial(int);

/****************/

int main(){
	
	printf("\n\n%d\n\n", factorial(4));
	printf("\n++ and -- operators modifies n before the evaluation of the\n"
		"whole expressioni. I.e. n - 1 works prefectly: factorial(24)\n"
		"returns 24. With --, it returns 6.\n\n");
	return 0;
}

/******************/	

int factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return
			(n * factorial(n - 1));  /*with --n does not work*/
						/*it modifies n before the evaluation*/
						/*of the whole expression*/
}
