/* Exercise 6.2 */

#include<stdio.h>
#include<stddef.h>

int main(int argc, char *argv[]){
	char *format = "\n%p %d %d %d %d %li %li %lu %lu\n";
	 
	int i = 3;
	int *p = &i;

	printf(format, p, *p + 7, 3 * **&p + 1, p, (p - 2), p, (p - 2), p, (p - 2));

	/* p contains the address of i */
	  
	 /* (*p) is the dereferentiated value of i (that is 3)
	 * (p), when subtracted with (p - 2), warns about integer overflow. Textbook
	 * suggest to check stddef.h yo verify if it is int rather than long. In stddef.h
	 * typedef__PTRDIFF_TYPE__ptrdiff_t
	 */


	return 0;
}

