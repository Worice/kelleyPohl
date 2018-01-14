/* Esercizio 6.27 */

#include<stdio.h>

int main(){
	char *p = "abc", *q = "abc";

	if(p == q)
		printf("\nThe two strings have the same address.\n");
	else
		printf("\nAs I expected, the addresses are different.\n");
	return 0;
}
