/* Esercizio a random su ricorsione */

#include<stdio.h>
#define MAX 10
int count(int);
int sum(int);
int mcd(int, int);
int largest(int []);
void reverse(char *);
int fact(int);
void binary(int);
int prime(int, int);
void odds(int, int);
/* MAIN */

int main(){
	int a[MAX] = {22, 345, 65, 324, 12, 1, 18, 45, 23, 87};
	char *s = "Hello world!";

	printf("Digits in number:\t%d\n", count(123));	
	printf("Sum of digits:\t\t%d\n", sum(123));	
	printf("Euclidean MCD:\t\t%d\n", mcd(30, 12));
	printf("Largest element:\t%d\n", largest(a));
	printf("%s", s); 
	reverse(s);
	printf("\nFactorial of 11:\t%d\n", fact(11));
	printf("Binary of 1025:\t"); binary(1025);
	printf("Is %d a prime number:\n%d\n", 17, prime(17, 2));
	odds(4, 22);

	return 0;

}

/* AUX */

int count(int n){
	if(n / 10 == 0)
		return 1;
	else
		return 1 + count(n / 10);
	 
}

int sum(int n){
	if(n / 10 == 0)
		return (n % 10);
	else
		return (n % 10) + sum(n / 10);
}

int mcd(int m, int n){
	if(m % n == 0)
		return n;
	else
		mcd(n, m % n);
}

int largest(int a[]){
	static int i = 0, max = -9999;
	if(i < MAX){
		if(max < a[i])
			max = a[i];
		i++;
		largest(a);
	}
	return max;
}

void reverse(char *s){
	if(*s == '\0')
		printf("\n");
	else{	
		reverse(s + 1);
		printf("%c", *s);
	}
}

int fact(int n){
	if(n < 1)
		return 1;
	else
		return n * fact(n - 1);
}

void binary(int n){
	int mask = 1;
	if(n == 0)
		printf("\n");
	else{
		printf("%c", (n & mask) == 1 ? '1' : '0');
		binary(n >>= 1);
	}
}

int prime(int n, int div){
	if(div >= (n / 2))
		return 1;
	else
		return (1 && (n % div != 0) && (prime(n, div + 1)));
}

void odds(int m, int n){
	if(m <= n){
		if(m % 2 != 0){
			printf("%d ", m);
			odds(m + 2, n);
		}
		else
			odds(m + 1, n);
	}
}














