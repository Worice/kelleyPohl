/* Esercizio 6.6 */

#include<stdio.h>

int main(){
	int a = 1, b = 2, c = 3;

	printf("%s%p\n%s%p\n%s%p\n\n",
		"&a = ", &a,
		"&b = ", &b,
		"&c = ", &c);

	printf("%s%d\n%s%d\n%s%d\n\n",
		"&a = ", &a,
		"&b = ", &b,
		"&c = ", &c);

	int d, e, f, *g, *h, *i;

	printf("%s%p\n%s%p\n%s%p\n\n",
		"&d = ", &d,
		"&e = ", &e,
		"&f = ", &f);

	printf("%s%p\n%s%p\n%s%p\n",
		"&g = ", &g,
		"&h = ", &h,
		"&i = ", &i);
	return 0;
}
