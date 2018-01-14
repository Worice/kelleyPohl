/* Esercizio 6.10 */

#include<stdio.h>

void change_it(int []);

int main(){
	int a[5], *p;

	p = a;
	printf("\np has the value %p\n", p);
	change_it(a);
	p = a;
	printf("\np has the value %p\n", p);
	printf("\nNothing changes because the assignment a = q does not\n"
		"change the value in a. Being an array, a is the address of its base.\n"
		"Similarly, undereferentiated value of q is the address of &i, not its\n"
		"value. a = a should change the base address of a to the base address of i.\n"
		"But! Being a an array, its address is a constant, and cannot be changed!\n\n");
	
	return 0;
}

/********* AUX *************/

void change_it(int a[]){
	int i = 777, *q = &i;
	a = q; 
}

