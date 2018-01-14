/* Esercizio 6.28 */


#include<stdio.h>

int main(){
	char s[] = "abc";
	const char *p = s;
	*p = 'A';		/* Illegale. Assignement of read only location */
	printf("%s\n", s);
	return 0;
}	
