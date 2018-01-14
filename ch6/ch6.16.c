/* Capitolo 6.16 - Funzioni come parametri */

#include<stdio.h>
double add_one(void);
double add_four(void);
double triple(double, double(*)());
double triple_odd(double, double (*) (double));
double odd_to_even(double);

int main(int argc, char *argv[]){
	double base = 3.00;
	printf("base 				= %2.2f\n", base); 	
	printf("with triple + add functions 	= %2.2f\n", triple(base, add_four));
	printf("with triple + odd functions 	= %2.2f\n", triple_odd(base, odd_to_even));


	return 0;
}

/*************** AUX **************/

double add_one (void){
	return 1.0;
}

double triple(double n, double(*f)(void)){
	int a = n * 3.0;
	a += f();
	return a;
}

double add_four(void){
	return 4.0;
}

double triple_odd(double n, double (*f)(double)){
	double m = n * 3.0;
	return f(m);
}

double odd_to_even(double n){
	if(((int) n) % 2 == 0)
		return n;
	else
		return n + 1.0;
}









