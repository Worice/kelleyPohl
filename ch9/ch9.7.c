/* Exercise 9.7 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int	re;
	double	im;
} complex;

typedef complex *CMPX;

complex diff1(complex, complex);
CMPX diff2(CMPX, CMPX);

/* MAIN */

int main(){
	complex c1, c2, c3; 
	CMPX c4;
	c1.re = 2; c1.im = 2.0;
	c2.re = 5; c2.im = 7.0;

 	c3 = diff1(c1, c2);
 	c4 = diff2(&c1, &c2);

	printf("%d\n", c3.re);
	printf("%d\n", c3.im);
	printf("%d\n", c4 -> re);
	printf("%d\n", c4 -> im);


	return 0;
}

/* AUX */

complex diff1(complex c1, complex c2){
	complex c3;
	c3.re = c1.re - c2.re;
	c3.im = c1.im - c2.im;
	return c3;
}

CMPX diff2(CMPX c1, CMPX c2){

	CMPX c3;
	c3 = malloc(sizeof (complex));

	c3 -> re = c1 -> re - c2 -> re;
	c3 -> im = c1 -> im - c2 -> im;

	return c3;
}









