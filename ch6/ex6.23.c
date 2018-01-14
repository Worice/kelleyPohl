/* Esercizio 6.23 */

#include<assert.h>
#include<stdio.h>

#define N 20

typedef const char cchar;

void add(int sum[], int a[], int b[]);	/* sum = a + b */
void wrt(cchar *s, int a[]);
int countdown(int *, int *, int *, int);
int main(){
	int a[N] = {7,5,9,8,9,7,5,0,0,9,9,0,8,8};
	int b[N] = {7,7,5,3,1,2,8,8,9,6,7,7};
	int a1[N] = {1,1,1,1,1,1,1,1,1};
	int b1[N] = {2};
	int mul[N];
	int sum[N];
	int ndigits;

	add(sum, a, b);
	countdown(sum, a1, b1, 0);
	wrt("Integer a: ", a);
	wrt("Integer b: ", b);

	wrt("Sum:	", sum);
	return 0;
}

/* AUX */

void add(int sum[], int a[], int b[]){
	int carry = 0;
	int i;

	for(i = 0; i < N; ++i){
		sum[i] = a[i] + b[i] + carry;
		if(sum[i] < 10)
			carry = 0;
		else{
			carry = sum[i] / 10;
			sum[i] %= 10;
		}
	}
}

void wrt(cchar *s, int a[]){
	int i;
	printf("%s", s);
	
	for(i = N - 1; i > 0 && a[i] == 0; --i)	/* Stampa zero iniziali come spazi */
		putchar(' ');
	
	for(; i >= 0; --i)
		printf("%d", a[i]);
	putchar('\n');
}

int countdown(int *mul, int *a1, int *b1, int i){		/*Azzera array. Torna zero quando ha finito1. Non completo */ 		
	if(i >= 0 && b1[i] >= 0 && i < N){
		b1[i] -= 1;
		add(mul, mul, a1);
	}
	else{
		countdown(mul, (a1 + 1), *(b1 + i) *= 10,  i + 1);
		return 0;
	}
}
		
	










