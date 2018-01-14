/* Esercizio 6.18 */

#include<stdio.h>
#include<string.h>

int main(){
	char a[] = "abcdefghijklmnopqrsuvwxyz";
	char *p = a;
	char *q = a + strlen(a) - 1;

	printf("\na = %s\n", a);
	strcpy(p, q);
		
	printf("\na = %s\n", a);

	return 0;
}
