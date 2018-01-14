/* Exercise 4.23
 *
 * [...] See more text on the book.
 *
 * Write a program that reads in values for a, b, and c and prints the value of the
 * square root of the discriminant. For example, if the values 1, 2, and 3 are read in,
 * then i *2.828427 should be printed.
 */

#include<stdio.h>
#include<math.h>

int main(void){
	double a, b, c, d;	/* d is the delta*/
	double s1, s2;		/* The solutions*/
	printf("\nType free floats for a second degree equation to solve:\n");
	scanf("%lf%lf%lf", &a, &b, &c);

	d = b * b - 4 * a * c;
       
	if(d > 0){
		s1 = (- b + sqrt(d)) / (2 * a);
		s2 = (- b - sqrt(d)) / (2 * a);
		printf("\nThe equation has two different solutions:\n"
		"d = %.2lf, s1 = %.2lf and s2 = %.2lf\n\n", d, s1, s2);
	}
	else if(d == 0){
		s1 = (- b + sqrt(d)) / (2 * a);
		printf("\nThe equations has two coincident solutions:\n"
			"s = %lf\n\n", s1);
	}
	else
		printf("\nThe equation does not have real solutions.\n\n");
			
	return 0;
}
