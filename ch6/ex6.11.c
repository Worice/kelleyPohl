/* Esercizio 6.11 */

#include<stdio.h>

int main(){
	int a[] = {0, 2, 4, 6, 8}, *p = a + 3;

	printf("\n%s%d%s\n%s%d%s\n",
		"a[3]	= ", *p, 	"!",
		"a[3] + 1 = ", *p + 1, 	"!");

	printf("\n\np holds the address of (a + 3), that is, a[3]. Corretly, its value is 6.\n"
		"in *p + 1, the * operator has precendence on +. The expresison does not\n"
		"change any address. It simply adds 1 to the value addressed by p.\n\n");
	return 0;
}
