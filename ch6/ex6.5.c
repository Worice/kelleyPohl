/* Esercizio 6.5 */

#include<stdio.h>

int main(){
	char a, b, c, *p, *q, *r;
	printf("\n&a = %p\n"
		"&b = %p\n"
		"&c = %p\n"
		"&p = %p\n"
		"&q = %p\n"
		"&r = %p\n",
		&a, &b, &c, &p, &q, &r);
	printf("\nLe locazioni di memoria di a, b, c sono in ordine crescente, ognuna\n"
		"separata da 4 byte. Le locazioni dei puntatori invece son separate da 8 byte\n"
		"o 2 words.\n");
	return 0;
}
