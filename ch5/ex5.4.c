/* Exercise 5.4
 *
 * In traditional C, the general form of a function definition is
 * 
 * 	type function_name( parameter list)
 * 	declarations of the parameters
 * 	{declarations statements}
 * 
 * See Section 5.1, "Function Definition," on page 198, for an example. Rewrite the
 * function definition for fO in the previous exercise in this style. Check to see that
 * your compiler will accept it. Does the program produce the same output? (It
 * should.)
 *
 */

#include<stdio.h>

int z;

void f(x)
	int x;
	{
		x = 2;
		z += x;
	}

int main(void){
	z = 5; 
	f(z);
	printf("z = %d\n", z);
	return 0;
}



