/* Esercizio 6.26 */

/* Esercizio sembra contenta espressioni illegali. Segmentation core dumped. Nessuna 
 * differenza fra le diverse versioni del compilatore std=c89/99 e l'ultimo. */

#include<stdio.h>

int main(){
	char *p = "abc";
	*p = 'X';
	printf("%s\n", p);
	return 0;
}
