/* Esercizio 6.7 */

#include<stdio.h>

int main(){
	int a = 1, b = 2, c = 3;

	printf("%s%p\n%s%p\n%s%p\n\n",
		"&a = ", &a,
		"&b = ", &b,
		"&c = ", &c);

	printf("%s%lu\n%s%lu\n%s%lu\n\n",
		"&a = ", (unsigned long) &a,
		"&b = ", (unsigned long) &b,
		"&c = ", (unsigned long) &c);

	return 0;
}
