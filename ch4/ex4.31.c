/* Exercise 4.31
 *
 * Because it leads to "spaghetti code," the go to is seldom used in today's program-
 * ming world. The following code illustrates how just a few goto statements can
 * make the flow of control incoherent:
 *
 * 	[missing code, check the book. to long to copy. too lazy to copy]
 *
 * Note how the programmer kept adding different cases and had to repatch the code
 * until the program logic became obscure. Rewrite this code without using gata
 * statements.
 *
 */

#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[]){
	double a, b, c, d;
	double r1, r2;
	printf("\nType four float numbers:\n");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	if( d == 0.0){
		if(a != 0.0){
			r1 = r2 = -b / (2.0 * a);
			printf("\nr1 = r2 = %lf\n", -b / (2.0 * a));
		}
		else
			printf("\nDegenerate case\n");
	}
	else if (d > 0.0){
		if(a != 0.0){
			r1 = (- b + sqrt(d)) / (2.0 * a);
			r2 = (- b - sqrt(d)) / (2.0 * a);
			printf("\nr1 = %lf\n", r1);
			printf("\nr2 = %lf\n", r2);
		}
		else
			printf("\nDegenerate case\n");
	}
	else
		if(a != 0.0)
			printf("\nImaginary roots\n");
	return 0;
}
