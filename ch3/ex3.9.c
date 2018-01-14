/* If you expand the two functions tan (si n(x)) and si n (tan (x)) in a Taylor series
 * about the origin, the two expansions agree for the first seven terms. (If you have
 * access to a computer algebra system such as Maple or Mathematica, you can see
 * this easily.) This means that the difference of the two functions is very flat at the
 * origin. Try the follOwing program:
 *
 * #include <math.h>
 * #include <stdio.h>
 *
 * double f(double x);
 *
 * int main(void){
 * 	double x;
 *      for (x = -0.25; x <= +0.25; x += 0.01)
 *      	printf("f%+.2f) = %+.15f\n", x, f(x));
 *      return 0;
 * }       
 *
 * double f(double x){
 * 	return(tan(sin(x)) - sin(tan(x)));
 * }
 *
 * The output of this program illustrates the flatness of f() near the origin. Do you
 * see it? Also, as an experiment remove the plus signs that occur in the formats. You
 * will find that the output does not line up properly.
 *
 * */

#include <math.h>
#include <stdio.h>

double f(double x);

int main(void){
	double x;
	for (x = -0.25; x <= +0.25; x += 0.01)
		printf("f%+.2f) = %+.15f\n", x, f(x));
	return 0;
}

double f(double x){
	return(tan(sin(x)) - sin(tan(x)));
}
