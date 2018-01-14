/* Esercizio 6.14 */

#include<stdio.h>
#define N	5
void mult_poly(double *, double *, double *, int n);

/********* MAIN ******/

int main(){
	double a[N + 1] = {1.0, 2.0, 3.0, 4.0, 5.0};
	double b[N + 1] = {2.0, 2.0, 2.0, 2.0, 2.0};
        double c[N + 1];
	
	
	mult_poly(a, b, c, N + 1);
	int i;

	for(i = 0; i < N; ++i)
		printf("\n%lf\n", *(c + i));


	return 0;
}

/******** AUX ********/

void mult_poly(double *p, double *q, double *r, int dim){
	int n;	
	for(n = 0; n < dim; ++n){
		if(*(p + n) != 0.0 && *(q + n) != 0.0)
			*(r + n) = *(p + n) * *(q + n);
		else
			if(*(p + n) && !(*(q + n)))
				*(r + n) = *(p + n);
			else if (!(*(p + n)) && *(q + n))
				*(r + n) = *(q + n);
			else
				*(r + n) = 0.0;
	}
}



		
	




	








