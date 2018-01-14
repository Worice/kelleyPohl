/* Esercizio 6.4 */

#include<stdio.h>

int main(int argc, char *argv[]){
	int i = 2, i1, i3, j = 3;
	int *p, *p1, *q, *q2;
	p = &i;
	*q = &j;

	i = (int) p;
	i1 = *&*&j;

	/* p = ...; i = ...; test the various assignment */
	
	printf("\np = &i       : %p\t 	->	true\n"
		"*q = &j       : %d\t	->	possible, but q does not point to a cell\n"
		"p1 = &*&i     :  			->	Not possible\n"
		"i = (*&)j     : 			->	false, expression expected in (*&)?\n"
		"i = (int) p   : %d		->	possible, integer is only of size different\n"
		"i1 = *&*&j    : %d			-> 	It appears to be correct, even if equal to *&i and i\n"
		"q = &p					->	false, even if possible. q should be int **q\n"
		"i3 = *p++ + *q: %d 		->	true\n",
		p, *q, i, i1, *p++ + *q);

	return 0;
}
