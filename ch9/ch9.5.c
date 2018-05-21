/* Exercise 9.5a 
 *
 * Version e con passaggio di valore
 * 
 * Functio linux time function applied on both programs
 *
 * */

#include <stdio.h>

typedef struct{
	double	re;
	double	im;
} complex;

complex mult(complex, complex);
void mult2(complex *, complex *, complex *);


/* MAIN */

int main(){
	complex m1, m2, m3, m4;
	m1.re = 1000000.0; m1.im = 1000000.0;
	m2.re = 200000.0; m2.im = 200000.0;
	
	m3 = mult(m1, m2);
/*	mult2(&m4, &m1, &m2);*/

	printf("%f\n", m3.re);
	printf("%f\n", m3.im);
/*
	printf("%f\n", m4.re);
	printf("%f\n", m4.im);*/
	return 0;
}

/* AUX */

complex mult(complex b, complex c){
	complex a;
	a.re = b.re * c.re - b.im * c.im;
	a.im = b.im * c.re + b.re * c.im;
	return a;
}

void mult2(complex *a, complex *b, complex *c){
	a -> re = b -> re * c -> re - b -> im * c -> im;
	a -> im = b -> im * c -> re + b -> re * c -> im;
}
	
