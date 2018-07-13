/* Practice questions for recursion */

#include<stdio.h>
#define DIM 4 

/* Set1 */
void fun1a(int, int);
int aux_fun1b(int *, int);
void fun1b(int *, int, int);

/*Set 2 */
int fun2a(int);
void fun2b(int);

/* Set 3 */
void fun3a(int);
void fun3b(int);

/* Set 4 */
void fun4a(int);
int fun4b(int a[], int);
int fun4c(int);

/* Set 5 */
int fun5a(int, int);
int fun5b(int, int);
int fun5c(int);

/* Set 6 */
void fun6a(char *);
int fun6b(int);
/* AUX */
void print_array(int *, int);

/* MAIN */

int main(){
	int a[DIM] = {3, 7, 5, 2};	
	fun1a(4, 1);					/* Set 1*/
	printf("%d\n", aux_fun1b(a, DIM));
	print_array(a, DIM);
	fun1b(a, 0, DIM - 1);
	printf("Hello\n");
	print_array(a, DIM);				/* Set 2*/
	printf("Set 2a: %d\n", fun2a(17));
	fun2b(177); 	printf("\n");
	fun3a(3); 	printf("\n");			/* Set 3*/
	fun3b(4);	printf("\n");	
	fun4a(3);	printf("\n");			/* Set 4*/
	printf("%d\n", fun4b(a, DIM));	
	printf("%d\n", fun4c(3));	
	printf("%d\n", fun5a(4, 2));			/* Set 5*/
	printf("%d\n", fun5b(3, 3));
	printf("%d\n", fun5b(3, 2));
	printf("%d\n", fun5c(101));
	printf("%d\n", fun5c(100));
	printf("%d\n", fun5c(99));
	printf("%d\n", fun5c(102));
	fun6a("abc");					/* Set 6 */
	fun6b(1);
	fun6b(5);
	fun6b(7);
	return 0;
}

/* Set 1 */

void fun1a(int x, int y){
	if(x == 0)
		printf("%d ", y);
	else
		fun1a(x - 1, x + y);
}

int aux_fun1b(int a[], int rec){		/*minimum value in array*/
	int min;
	if(rec == 1)
		return a[0];
	else{
		min = aux_fun1b(a, rec - 1);
		if(min < a[rec - 1])
			return min;
		else
			return a[rec - 1];
	}
}

void fun1b(int a[], int start, int end){
	if(start >= end)
		return;
	int min;
	int tmp;

	min = aux_fun1b(a, end);
	
	tmp = a[start];
	a[start] = a[min];
	a[min] = tmp;

	fun1b(a, start + 1, end);
}

/* Set 2 */

int fun2a(int n){
	if(n == 1)
		return 0;
	else
		return 1 + fun2a(n / 2);
}

void fun2b(int n){
	if(n == 0)
		return;
	fun2b(n / 2);
	printf("%d", n % 2);
}

/* Set 3 */

void fun3a(int n){
	int i = 0;
	if(n > 1)
		fun3a(n - 1);
	for(i = 0; i < n; i++)
		printf(" * ");
}

void fun3b(int n){
	if(n <= 0)
		return;
	if(n > 100)
		return;
	printf("%d ", n);
	fun3b(2 * n);
	printf("%d ", n);
}

/* Set 4 */
void fun4a(int n){
	if(n > 0){
		fun4a(--n);
		printf("%d\t", n);
		fun4a(--n);
	}
}

int fun4b(int a[], int n){
	int x;
	if(n == 1)
		return a[0];
	else{
		x = fun4b(a, n - 1);
		if(x > a[n - 1])
			return x;
		else
			return a[n - 1];
	}
}

int fun4c(int n){
	if(n % 2)
		return n++;
	else
		return fun4c(fun4c(n - 1));
}

/* Set 5 */

int fun5a(int a, int b){
	if(b == 0)
		return 0;
	if(b % 2 == 0)
		return fun5a(a + a, b / 2);
	return fun5a(a + a, b / 2) + a;
}

int fun5b(int a, int b){
	if(b == 0)
		return 1;
	if(b % 2 == 0)
		return fun5b(a * a, b / 2);
	return fun5b(a * a, b / 2) * a;
}

int fun5c(int n){
	if(n > 100)
		return n - 10;
	return fun5c(fun5c(n + 11));
}

/* Set 6 */

void fun6a(char *s){	
	if(s[0] == '\0')
		return;
	fun6a(s + 1);
	fun6a(s + 1);
	printf("%c", s[0]);
}

int fun6b(int n){
	printf("hello %d\n", n);
       	if(n < 3){
		fun6b(fun6b(fun6b(++n)));
	}
	return n;
}	

/* Set 7 */

int fun7a(int n, int *fp){
	int t, f;
	if(n <= 1){
		*fp = 1;
		return 1;
	}
	t = fun(n - 1, fp);
	f = t + *fp;
	*fp = t;
	return f;
}



/* AUX */

void print_array(int a[], int rec){
	if(rec == 0)
		printf("\n");
	else{
		printf("%d ", *a);
		print_array(a + 1, rec - 1);
	}
}


