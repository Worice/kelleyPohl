/* Esercizio 6.31 */

#include<stdio.h>

void try_me(int [][3]);
void print_explanation();
void print_second_declaration();

int main(void){
	int a[3][3] = {{2, 5, 7}, {0, -1, -2}, {7, 9, 3}};

	try_me(a);
	print_second_declaration();
	return 0;
}
/***** AUX *****/

void try_me(int (*a)[3]){
	printf("%d %d %d %d ... infinity\n",
		a[1][0], -a[1][1], a[0][0], a[2][2]);
}

void print_explanation(){
	printf("\na[1][0]\tprints zeroeth element of the array 1;\n"
		"-a[1][1]\tprints the value of the first element of the first array\n"
		"\t\tand multiplicates it by (-1))"
		"a[0][0]\tprints the zeroeth element of the zeroenth array;\n"
		"a[2][2]\tprints the second element of the second array.\n");
}

void print_second_declaration(){
	printf("\nIf we declare try_me with *a[3] instead of (*)[3], the\n"
		"the complainer reports that an argument of type int ** is\n"
		"expected, but we have type  int *.\n\n");
}
