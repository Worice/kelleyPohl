/* Exercise 5.20
 *
 * In the program that follows, we have purposely declared some external variables at
 * the bottom of the file. What gets printed?
 *
 * [code on the book]
 *
 * The variables at the bottom of the file are now static external, so they should not be
 * available in main(). Because the external variables referred to in main() are not
 * available, your compiler should complain. Does it? (We find that most compilers get
 * confused.)
 *
 */


#include <stdio.h>
int main(void){
	extern int a, b, c;	/*Look for them elsewhere*/

	printf("%3d%3d%3d\n", a, b, c);
	printf("\nIf a, b, and c are declared as extern, everything is fine.\n"
		"When they are set to static, they are no more visible in main().\n"
		"The compiler shows error and warning for every variable.\n\n");

	
	return 0;
}

int a = 1, b = 2, c = 3; 	/*with static it does not work*/
