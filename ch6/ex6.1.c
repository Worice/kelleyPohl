
/* Exercise 5.1 */

#include<stdio.h>

int main(int argc, char *argv[]){
	char *format = "\n%p %d %d %d\n";
	int i = 3;
	int *p = &i;

	printf(format, p, *p + 7, 3 * **&p + 1, 5 * (p - (p - 2)));

	/* p contains the address of i
	 * *p is the dereferentiated value of i (that is 3)
	 * p - (p - 2) is the difference between two memory addresses
	 */


	return 0;
}

