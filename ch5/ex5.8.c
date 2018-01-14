/* Exercise 5.8
 *
 * A polynomial of degree 2 in x is given by:
 *
 * 	ax^2 + bx + c
 *
 * Write the code for the function
 *
 * double f(double a, double b, double c, double x){...}
 *
 * that will compute the value of an arbitrary polynomial of degree 2. Use the identity
 *
 * 	(ax + b)x + c = ax^2 + bx + c
 * 
 * to minimize multiplications. Use your function to create a file of points that could
 * be used to plot the polynomial x^2 - 3x + 2 on the interval [0, 3]. The variable x
 * should go from 0 to 3 in steps of 0.1. By examining your file, can you tell where the
 * roots of the polynomial are?
 */

#include<stdio.h>
#include<math.h>

int main(){

	double a = 1.0, b = 3.0, c = 2.0, x = 0.0;
	double s;
	int cnt = 0;
	
	double f(double a, double b, double c, double x){ 
		s = (a * x + b) * x + c;
		return s;
	}
	
	for(x = 0.0; x <= 3.0; x += 0.1f){
		printf("%10.3lf ", f(a, b, c, x));
		if(++cnt % 5 == 0)
			printf("\n");
	}

	return 0;
}











