/* Exercise 5.5
 *
 * In this exercise, we want to experiment with function declarations. We will use the
 * function pow() from the mathematics library, but instead of including math.h, we
 * will supply our own function declaration. Begin by executing the following program:
 *
 * #include <stdio.h>
 *
 * double pow(double, double);
 *
 * 	int main(void){
 *      	printf(" pow (2.0, 3.0) = %g\n", pow(2.0. 3.0));
 *         	return;
 * 	}
 *
 * Next, change the printf() statement to
 *
 * 	printf("pow(2, 3) = %g\n", pow(2, 3));
 *
 * and run the program again. Even though you have passed ints to pow() instead of
 * doubles, do you get the correct answer? You should, because the compiler, knowing
 * that double arguments are required, is able to coerce the values supplied into	
 * the right form. Next, replace the function prototype by
 *
 * 	double pow()		traditional style
 *
 * What happens now? Finally, remove the function declaration completely. Although
 * your program cannot be expected to run correctly, it should compile. Does it? It
 * important to remember that even though the C system provides object code for
 * functions in libraries, it is the responsibility of the programmer to provide
 * function prototypes.
 */

#include <stdio.h>

double pow(double, double);

int main(void){
	printf("1) pow (2.0, 3.0) = %g\n", pow(2.0, 3.0));
	printf("2) pow(2, 3) = %g\n", pow(2, 3));
	return 0;
}
