/* Exercise 7.12
 * Multibyte character rapresentation
 */

#include<stdio.h>
#include<limits.h>
void bit_print(int a);
/* MAIN */

int main(){
	bit_print('abc');
	printf("On my PC 32 zeroes are printed.\n");
	return 0;
}

/* AUX */

void bit_print(int a){
	int i;
	int n = sizeof(int) * CHAR_BIT;
	int mask = i << (n - 1);

	for(i = 1; i <= n; ++i){
		putchar(((a & mask) == 0) ? '0' : '1');
		a <<= 1;
		if(i % CHAR_BIT == 0 && i < n)
			putchar(' ');
	}
}

